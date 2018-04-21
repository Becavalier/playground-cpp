#include <map>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    // work with "--std=c++!1"
    map<int, int> ma = {
        pair<int, int> (1, 2),
        pair<int, int> (2, 3)
    };

    map<double, double> ma2;
    ma2.insert(pair<double, double> (10.1, 12.1));

    map<int, int>::iterator it;
    for (it = ma.begin(); it != ma.end(); it++) {
        cout << "Key ele: " << it->first << endl;
        cout << "Value ele: " << it->second << endl;
    }
}
