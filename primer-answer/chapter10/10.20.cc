#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (int argc, char **argv) {
    vector<string> str = {"apple", "banana", "computer", "lack"};

    cout << count_if(str.begin(), str.end(), [](string &str) -> bool {
        return str.size() > 6;
    });
    
    return 0;
}