#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (int argc, char **argv) {
    vector<char> v(10, 'a');
    string s = string(begin(v), end(v));

    cout << s << endl;
 
    return 0;
}