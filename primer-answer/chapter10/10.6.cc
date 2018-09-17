#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char **argv) {
    vector<int> v = {1, 2, 3, 4};
    fill_n(begin(v), v.size(), 0);

    for (auto e : v) {
        cout << e << endl;
    }
    return 0;
}