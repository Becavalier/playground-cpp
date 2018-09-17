#include <iostream>
#include <string>

using namespace std;

string wrapper(string &name, string &prefix, string &postfix) {
    auto start = begin(name);
    auto stop = end(name);
    
    for (auto i = 0; i < prefix.size(); i++) {
        name.insert(start + i, prefix.at(i));
    }
    name.append(begin(postfix), end(postfix));

    return name;
}

int main (int argc, char **argv) {
    string x = "YHSPY";
    string y = "Hello, ";
    string z = ", Yep!";

    cout << wrapper(x, y, z) << endl;

    return 0;
}