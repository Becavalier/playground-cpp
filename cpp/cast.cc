#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  // const
  int x = 10;
  // "bottom-const"
  const int *pc = &x;
  int *p = const_cast<int*>(pc);
  *p = 100;
  cout << *p << endl;

  return 0;
}
