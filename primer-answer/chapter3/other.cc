#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int ia[3][4] = {
    {1, 2, 3, 4},
    {2, 3, 4, 5},
    {3, 4, 5, 6}
  };
  int (*p)[4] = ia;
  p = &ia[2];

  using int_array = int[4];

  for (int_array *p = ia; p != ia + 3; ++p) {
    // Here "*p" is a pointer points to the sub array;
    for (int *q = *p; q != *p + 4; ++q) {
      cout << *q << " " << endl;
    }
  }
  return 0;
}
