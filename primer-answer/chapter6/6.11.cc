#include <iostream>

using namespace std;

void reset (int &x);

int main (int argc, char **argv) {
  int x = -1;
  reset(x);
  cout << x << endl;

  return 0;
}

void reset (int &x) {
  x = 0;
}
