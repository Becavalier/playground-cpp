#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int x = 10;
  const int y = 20;

  int *p1 = &x;

  // int &r = 10;
  //
  int &r1 = x;
  const int &r2 = 10;
  const int *p2 = &x;

  const int *const pip = &y;

  // "top-level" const;
  int *const ip1 = nullptr;
  constexpr int *ip2 = nullptr;

  int i = 42, *p = &i, &r = i;
  decltype(r + 0) b;
  decltype(*p) c = i;  // &int
  decltype((i)) d = i; // &int
  return 0;
}


