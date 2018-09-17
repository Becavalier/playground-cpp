#include <vector>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
    vector<int> v{0, 1, 2, 3};

    for (auto e = v.end() - 1; e != (v.begin() - 1); e--) {
        cout << *e << endl;
    }
    return 0;
}