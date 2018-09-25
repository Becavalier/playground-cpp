#include <iostream>

using namespace std;

constexpr int y = 100;
int x = 10;
// int k = 10;

int main (int argc, char **argv) {
  static int k = 10;

  // above two are all "const" pointer;
  const int *const p1 = &y;
  constexpr const int *p2 = &y;

  // the aim defined out of function or "static";
  constexpr int *p3 = &k;

  return 0;
}
