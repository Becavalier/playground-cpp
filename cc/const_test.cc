#include <iostream>

using namespace std;

int main() {
  int i = 100;
  int &r = i;

  // int* &rp = &i;

  int *p = &i;

  // 字面量；
  int* const &rp = &i;

  const int ival = 1024;
  const int &cr = ival;
  const int *const &ccr = &ival;

  const int *p1 = &ival;
  const int *const p2 = &ival;

  int const &r2 = 1000


}
