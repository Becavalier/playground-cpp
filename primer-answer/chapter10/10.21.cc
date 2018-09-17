#include <iostream>

using namespace std;

int main (int argc, char **argv) {
    int x = 3;

    // the x is keep its value to "3";
    // auto f = [x]() mutable {
    auto f = [=]() mutable {
        return --x == 0;
    };

    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;

    cout << x << endl;

    return 0;
}