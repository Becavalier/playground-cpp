#include <iostream>
#include <vector>

using namespace std;

bool compareVectors(const vector<int> &v1, const vector<int> &v2) {
    return v1 == v2;
}

int main (int argc, char* argv[]) {
    vector<int> v1(10, 1);
    vector<int> v2(10, 1);
    cout << compareVectors(v1, v2) << endl;

    return 0;
}