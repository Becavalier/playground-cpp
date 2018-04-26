#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
  vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto it = vec.begin(); it != vec.end(); it++) {
    *it = 2 * *it;
  }

  for (auto e : vec) {
    cout << e << endl;
  }
  return 0;
}
