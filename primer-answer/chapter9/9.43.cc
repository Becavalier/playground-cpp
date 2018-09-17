#include <iostream>
#include <string>

using namespace std;

string replace(string &s, string &oldVal, string &newVal) {
    int index = 0, global = 0, start = -1;
    for (auto i = begin(s); i != end(s); i++) {
        auto c = oldVal.at(index);
        if (*i == c) {
            if (start < 0) start = global;
            index++;
            if (index == oldVal.size() - 1) {
                // replace;
                s = s.erase(start, oldVal.size());
                s.insert(start, newVal);
                // reset;
                index = 0;
                start = -1;
            }
        } else {
            index = 0;
            start = -1;
        }
        global++;
    }
    return s;
}

int main (int argc, char **argv) {
    string x = string("Hello, Hello, world!");
    string y = string("Hello");
    string z = string("ff");

    cout << replace(x, y, z) << endl;

    return 0;
}
