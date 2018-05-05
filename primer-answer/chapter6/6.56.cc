#include <iostream>
#include <vector>

using namespace std;

int fAdd (int x, int y) {
  return x + y;
}

int fMinus (int x, int y) {
  return x - y;
}

int fMultiply (int x, int y) {
  return x * y;
}

int fDivision (int x, int y) {
  return x / y;
}

int main (int argc, char **argv) {
  using fp = int (*) (int, int);
  vector<fp> vec = {fAdd, fMinus, fMultiply, fDivision};

  // with "for-range";
  int x = 10, y = 20;
  for (auto f : vec) {
    cout << f(x, y) << endl;
  }

  // with  "iterator";
  vector<fp>::iterator it = vec.begin();
  for (; it != vec.end(); it++) {
    cout << (*it)(x, y) << endl;
  }

  return 0;
}
