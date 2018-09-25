#include <iostream>
#include <errno.h>

using namespace std;

int main (int argc, char **argv) {
    // strerror(int __errnum);
    cerr << strerror(EACCES) << endl;
    errno = ENOENT;
    // perror(const char* msg);
    perror(argv[0]);

    return 0;
}