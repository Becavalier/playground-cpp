#include <iostream>
#include <vector>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool findEle(string &str) {
    return str.length() == 6;
}

int main (int argc, char **argv) {
    vector<string> strs{"apple", "banana", "pinapple"};

    auto count = find_if(strs.begin(), strs.end(), bind(findEle, _1));

    cout << *count << endl;
    return 0;
}