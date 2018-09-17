#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main (int argc, char* argv[]) {
    list<int> l = {1, 2, 3, 4};
    vector<int> v = {1, 2, 3};

    if (l.size() != v.size()) {
        cout << "Not same!" << endl;
    } else {
        auto iter1 = l.begin();
        auto iter2 = v.begin();

        while(iter1 != l.end()) {
            if (*iter1 != *iter2) {
                cout << "Not same!" << endl;
            }
            iter1++;
            iter2++;
        }
        cout << "Same!" << endl;
    }

    return 0;
}