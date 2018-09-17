#include <iostream>

using namespace std;

int main (int argc, char **argv) {

    int x = 10;

    auto add = [x](int a, int b) -> int {
        return a + b + x;
    };

    auto minus = [](int a, int b) {
        return a - b;
    };

    auto num = [] {
        return 32;
    };

    cout << add(1, 2) << endl;
    cout << minus(1, 2) << endl;
    cout << num() << endl;

    return 0;
}