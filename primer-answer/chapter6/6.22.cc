#include <iostream>

using namespace std;

void replace (int*&, int*&);

int main (int argc, char **argv) {
  int x = 10, y = 20;
  int *p1 = &x, *p2 = &y;

  replace(p1, p2);
  cout << "x: " << *p1 << endl;
  cout << "y: " << *p2 << endl;
  return 0;
}

// A pointer's reference;
void replace (int *&x, int *&y) {
  int *t = x;
  x = y;
  y = t;
}
