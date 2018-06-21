#include <iostream>

using namespace std;

class xClass {
public:
  xClass () = default;
  enum {
    val1,
    val2
  };
};

int main(int argc, char **argv) {
  cout << xClass::val1 << endl;
  return 0;
}
