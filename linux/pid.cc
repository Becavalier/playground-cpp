#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main (int argc, char **argv) {
    cout << static_cast<long long>(getpid()) << endl;
    return 0;
}   
