#include <unistd.h>
#include <iostream>

#define BUFFSIZE 4096

using namespace std;

int main (int argc, char **argv) {
    int n;
    char buf[BUFFSIZE];

    while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
        if (write(STDOUT_FILENO, buf, n) != n)
            cerr << "write error" << endl;

    if (n < 0)
        cerr << "read error" << endl;

    return 0;
}