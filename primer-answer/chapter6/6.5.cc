#include <iostream>

using namespace std;

int abs(int x);

int main (int argc, char **argv) {
  cout << abs(-1) << endl;
  return 0;
}

int abs(int x) {
  return x > 0 ? x : -x;
}
