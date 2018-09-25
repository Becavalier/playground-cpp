// #include "apue.h"
#include <iostream>
#include <string>
#include <dirent.h>

using namespace std;
using Dirent = struct dirent;

int main(int argc, char **argv) {
    DIR *dp;
    Dirent *dirp;

    if (argc != 2) {
        cout << "usage: ls <directory_name>" << endl;
        return 1;
    }

    if ((dp = opendir(argv[1])) == nullptr) {
        cerr << "can't open" + string(argv[1]) << endl;
        return 1;
    }

    while((dirp = readdir(dp)) != nullptr) {
        cout << dirp->d_name << endl;
    }
        
    return 0;
}
