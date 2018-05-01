#include <iostream>

using namespace std;

int max (int x, int *y);

int main (int argc, char **argv) {
  int x = 10, y = 20;
  cout << "The bigger one is: " << max(x, y) << endl;
  return 0;
}

int max (int x, int *y) {
  return x > *y ? x : *y;
}

