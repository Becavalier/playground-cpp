// #define NDEBUG

#include <cassert>
#include <iostream>


using namespace std;

int main (int argc, char **argv) {
  int x;
  cin >> x;

#ifndef NDEBUG
  cerr << __func__ << endl;
  cerr << __FILE__ << endl;
  cerr << __LINE__ << endl;
  cerr << __DATE__ << endl;
  assert(x == 2);
#endif
  assert(x == 3);

  return 0;
}
