#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
    vector<int> v = {1, 2, 3, 4};
    cout << accumulate(v.cbegin(), v.cend(), 0) << endl;

    return 0;
}