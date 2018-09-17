#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void elimDups (vector<int>& v) {
    sort(begin(v), end(v));
    auto i = unique(begin(v), end(v));
    v.erase(i, end(v));
}

int main (int argc, char **argv) {
    vector<int> v = {1, 1, 2, 3, 4, 4};
    elimDups(v);

    for (auto i : v) {
        cout << i << endl;
    }

    return 0;
}