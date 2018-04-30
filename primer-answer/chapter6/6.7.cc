#include <iostream>

using namespace std;

int static_func(void);

int main (int argc, char **argv) {
  int counter = 0;
  while (counter++ < 10) {
    static_func();
  }
  return 0;
}

int static_func (void) {
  static int i = 0;
  cout << i++ << endl;
  return i;
}
