#include <vector>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
    vector<int> v{0, 1, 2, 3};

    for (auto e = v.rbegin(); e != v.rend(); e++) {
        cout << *e << endl;
    }
    return 0;
}