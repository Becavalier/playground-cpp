#include <iostream>

using namespace std;

class X {
  int counter = 0;

  void _core_add (int x) const {
    cout << counter + x << endl;;
  }

public:
  X () = default;

  X &selfplus(void) {
    counter += 1;
    return *this;
  }

  void print (void) {
    cout << counter << endl;
  }

  X &_wrapper_add (int x) {
    this->_core_add(x);
    return *this;
  }

  const X &_wrapper_add (int x) const {
    this->_core_add(x);
    return *this;
  }
};


int main (int argc, char **argv) {
  X x;
  const X y;

  x.selfplus().selfplus();
  x.print();

  x._wrapper_add(1000)._wrapper_add(99);
  y._wrapper_add(10);
  return 0;
}
