#include <iostream>
#include <functional>
#include <vector>

using namespace std;
using namespace std::placeholders;

bool checkSize(string &str, int val) {
    return val > str.length();
}

int main (int argc, char **argv) {
    string s = "apple";

    vector<int> v{0, 3, 6, 7, 1};

    auto count = find_if(v.begin(), v.end(), bind(checkSize, s, _1));

    cout << *count << endl;
     
    return 0;
}