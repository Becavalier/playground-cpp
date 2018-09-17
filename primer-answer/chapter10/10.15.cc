#include <iostream>

using namespace std;

int main (int argc, char **argv) {
    int x = 10;

    auto f = [x](int y) -> int {
        return  x + y;
    };

    cout << f(20) << endl;

    return 0;
}