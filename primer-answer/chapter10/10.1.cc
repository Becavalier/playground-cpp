#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
    vector<int> v = {1, 1, 1, 3, 4, 5};
    cout << count(begin(v), end(v), 1);
    return 0;
}   