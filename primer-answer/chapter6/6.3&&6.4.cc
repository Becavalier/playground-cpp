#include <iostream>

using namespace std;

int fact (int x);

int main (int argc, char **argv) {
  int t;
  cin >> t;
  cout << fact(t) << endl;
}

int fact (int x) {
  int r = 1;
  while (x > 1) {
    r *= x--;
  }
  return r;
}
