#include <iostream>

using namespace std;

int main (int argc, char **argv) {

    auto f = [](int x, int y) -> int {
        return x + y;
    };

    cout << f(1, 2) << endl;

    return 0;
}