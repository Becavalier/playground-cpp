#include <iostream>

using namespace std;

void replace2(int *x, int *y);

int main (int argc, char **argv) {
  int x = 1, y = 2;
  replace2(&x, &y);
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;
  return 0;
}

void replace2(int *x, int *y) {
  int t;
  t = *y;
  *y = *x;
  *x = t;
}
