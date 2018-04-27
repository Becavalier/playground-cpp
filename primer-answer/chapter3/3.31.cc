#include <iostream>
#include <cstddef>

using namespace std;

int main (int argc, char *argv[]) {
  constexpr unsigned int lt = 10;
  int x[lt];
  for (size_t i = 0; i < lt; i++) {
    x[i] = i;
  }
  for (auto e : x) {
    cout << e << endl;
  }

  return 0;
}
