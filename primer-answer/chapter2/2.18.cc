#include <iostream>

int main (int argc, char **argv) {
  int x = 10;
  int y = 100;
  int *p = &x;
  void *vp = &y;
  *p = 20;
  p = &y;

  std::cout << *p << std::endl;
  return 0;
}
