#include <iostream>

using namespace std;

class X {
  istream &is;
  char symbol;
public:
  X (istream &is) : is(is) {};
  void cinSymbol () {
    is >> symbol;
  }
  void getSymbol () {
    cout << symbol << endl;
  }
};

int main (int argc, char **argv) {
  X x(cin);
  x.cinSymbol();
  x.getSymbol();
  return 0;
}
