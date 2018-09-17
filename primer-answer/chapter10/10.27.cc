#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main (int argc, char **argv) {
    vector<int> v {0, 1, 2, 2, 3, 4};
    list<int> l;

    sort(v.begin(), v.end());
    unique_copy(v.begin(), v.end(), back_inserter(l));

    for (auto e : l) {
        cout << e << endl;
    }
    return 0;
} 