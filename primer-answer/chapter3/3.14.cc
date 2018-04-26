#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  vector<string> vec;
  string t;

  while (cin >> t) {
    vec.push_back(t);

    cout << "The size of vector is: " << vec.size() << endl;
  }

  return 0;
}
