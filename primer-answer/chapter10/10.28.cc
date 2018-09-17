#include <vector>
#include <list>
#include <deque>
#include <iostream>
#include <algorithm>

using namespace std;

int main (int argc, char **argv) {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

    list<int> l1;
    list<int> l2;
    deque<int> d;

    copy(v.begin(), v.end(), back_inserter(l1));
    copy(v.begin(), v.end(), inserter(l2, l2.begin()));
    copy(v.begin(), v.end(), front_inserter(d));

    for (auto e : l1) {
        cout << e << ' ';
    }
    cout << endl;
    for (auto e : l2) {
        cout << e << ' ';
    }
    cout << endl;
    for (auto e : d) {
        cout << e << ' ';
    }
    return 0;
}
