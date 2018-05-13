#include <iostream>

using namespace std;

struct X {
  X(int i, int j): base(i), rem(base % j) {}
  int base, rem;
};

int main (int argc, char **argv) {
  return 0;
}
