#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main (int argc, char **argv) {
    string str;
    list<string> slist;
    while (cin >> str) {
        if (str == "exit")
            break;
        slist.push_back(str);
    }

    string key = "hi";

    cout << count(begin(slist), end(slist), key) << endl;
    return 0;
}