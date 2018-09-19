#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> createVector(void) {
    return make_shared<vector<int>>();
}

int main (int argc, char **argv) {
    auto vector = createVector();
    int n = 0;
    while (cin >> n) {
        if (n == 0)
            break;
        vector->push_back(n);
    }

    for (auto e : *vector) {
        cout << e << endl;
    }
    return 0;
}