#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main (int argc, char *argv[]) {
    list<int> lint;

    // List is a kind of "linked list";
    for (int i = 0; i < 5; i++) {
        lint.push_back(i * i);
    }

    list<int>::iterator it;
    for (it = lint.begin(); it != lint.end(); it++) {
        cout << *it << endl;
    }

    lint.reverse();
    for (list<int>::reverse_iterator it = lint.rbegin(); it != lint.rend(); it++) {
        cout << *it << endl;
    }


}
