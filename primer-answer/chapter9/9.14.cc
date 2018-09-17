#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main (int argc, char **argv) {
    list<const char*> l = {"Hello", "World!"};
    vector<string> v;

    for (auto e : l) {
        v.push_back(e);
    }

    for (auto e : v) {
        cout << e << endl;
    }
    return 0;
}