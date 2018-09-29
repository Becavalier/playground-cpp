#include <iostream>
#include <unistd.h>
#include <sys/param.h>
#include <limits.h>
#include <errno.h>

using namespace std;

static long posix_version = 0;
static long xsi_version = 0;

#define PATH_MAX_GUESS 1024

#ifdef PATH_MAX
static long pathmax = PATH_MAX;
#elif
static long pathmax = 0;
#endif

char * path_alloc(size_t *sizep) {
    char *ptr;
    size_t size;

    if (posix_version == 0)
        posix_version = sysconf(_SC_VERSION);

    if (xsi_version == 0)
        xsi_version = sysconf(_SC_XOPEN_VERSION);
    
    if (pathmax == 0) {
        errno = 0;
        if ((pathmax = pathconf("/", _PC_PATH_MAX)) < 0) {
            if (errno == 0)
                pathmax = PATH_MAX_GUESS;
            else 
                cerr << "pathconf error for _PC_PATH_MAX" << endl;
        }
    }

    // for special case;
    if ((posix_version < 200112L) && (xsi_version < 4))
        size = pathmax + 1;
    else 
        size = pathmax;

    ptr = static_cast<char*>(malloc(size));

    if (sizep != NULL)
        *sizep = size;
    return ptr;
}

int main (int argc, char **argv) {
    cout << sysconf(PATH_MAX) << endl;
    cout << pathconf("/", _PC_PATH_MAX) << endl;

    return 0;
}
