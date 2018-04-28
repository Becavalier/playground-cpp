#include <iostream>
#include <vector>

using namespace std;

int  main (int argc, char **argv) {
  vector<int> vec{1, 2, 3, 4, 5, 6, 7};
  vector<int>::iterator it;
  for (it = vec.begin(); it != vec.end(); it++) {
    *it = (*it % 2 == 1) ? 2 * *it : *it;
  }

  for (auto e : vec) {
    cout << e << endl;
  }
  return 0;
}
