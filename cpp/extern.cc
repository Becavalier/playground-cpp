#include <iostream>

using namespace std;

extern "C" {
  class X {
    int x;
  public:
    X () = default;
    X (int x): x(x) {}
    inline int add (int y) {
      return this->x + y;
    }
  };

  int minus (int x, int y) {
    return x - y;
  }
}

int multi (int x, int y) {
  return x * y;
}

int main (int argc, char **argv) {
  X x(10);
  x.add(100);
  return 0;
}
