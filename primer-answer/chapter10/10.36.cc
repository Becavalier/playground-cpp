#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main (int argc, char **argv) {
    list<int> l{0, 1, 2, 3, 4, 0, 1};

    auto e = find(l.rbegin(), l.rend(), 0);

    cout << *e << endl;
    return 0;
}