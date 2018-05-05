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
  return 0;
}
