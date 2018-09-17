#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char **argv) {
    vector<int> l{0, 1, 2, 3, 4, 0, 1, 3, 4, 5}, r(5);

    copy(l.rbegin() + 3, l.rend() - 2, r.begin());

    for (auto e : r) {
        cout << e << endl;
    }
    return 0;
}