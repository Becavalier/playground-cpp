#include <iostream>
#include <cstddef>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
  constexpr int lt = 3;
  int x[lt] = {1, 2, 3};
  int y[lt];

  for (size_t i = 0; i < lt; i++) {
    y[i] = x[i];
  }

  vector<int> v1 = {1, 2, 3};
  vector<int> v2;

  v2 = v1;
  v2[0] = -1;

  for (auto e : v1) {
    cout << e << endl;
  }
  for (auto e : v2) {
    cout << e << endl;
  }
  return 0;
}
