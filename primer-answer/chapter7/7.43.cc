#include <iostream>

using namespace std;

class NoDefault {
  int x;
public:
  NoDefault(int x) : x(x){}
};

class C {
  NoDefault no;
public:
  C () : no(10) {};
};

int main (int argc, char **argv) {
  C c;
  return 0;
}
