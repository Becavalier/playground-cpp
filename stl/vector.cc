#include <vector>
#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
    vector<int> vec;
    int i;

    cout << "The size of vector: " << vec.size() << endl;

    for (int i = 0; i < 5; i++) {
        vec.push_back(i * i);
        cout << vec[i] << endl;
    }

    // use iterator;
    vector<int>::iterator v = vec.begin();
    while(v != vec.end()) {
        cout << *v << endl;
        v++;
    }

    cout << "Max size of vector: " << vec.max_size() << endl;

    /*
     * rbegin / rend  -> reverse_iterator
     * begin / end    -> iterator
     * */
    for (vector<int>::reverse_iterator i = vec.rbegin(); i < vec.rend(); i++) {
        cout << *i << endl;
    }

    cout << "at: " << vec.at(2) << endl;
    cout << "front: " << vec.front() << endl;
    cout << "back: " << vec.back() << endl;

    return 0;
}
