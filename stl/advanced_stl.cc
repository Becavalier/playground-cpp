#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <list>

using namespace std;

int main (int argc, char* argv[]) {
    vector<int> v{1, 2, 3, 4, 5};
    
    // insert single element;
    v.insert(v.begin() + 5, 10);

    // insert range elements;
    v.insert(v.begin(), 10, 100);

    // insert with intilization list;
    v.insert(v.begin(), {99, 98, 97, 96});

    v.insert(v.begin(), v.end(), v.end() - 2);

    // !!wrong!!
    // v.insert(v.begin(), v.begin(), v.end());
    for (auto e : v) {
        cout << e << endl;
    }


    list<string> lst;
    string word;
    auto iter = lst.begin();
    while(cin >> word) {
        iter = lst.insert(iter,word);
    }
    return 0;
}

