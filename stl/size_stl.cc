#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char **argv) {
    // 4;
    vector<int> iv(10, 1);
    // 8;
    vector<double> dv(10, 1.0);

    cout << iv.size() << endl;
    cout << iv.empty() << endl;
    cout << iv.max_size() << endl;
    cout << dv.max_size() << endl;
    return 0;
}