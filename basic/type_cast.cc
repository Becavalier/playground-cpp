#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int i = 10, j = 20;
  // "static_cast": big -> small, will lose precision;
  double slope = static_cast<double>(j) / i;
  cout << slope << endl;

  void *p = &i;
  int *x = static_cast<int*>(p);
  cout << *x << endl;

  // "const_cast": change bottom-level const;
  char c = 'H';
  const char *cp = &c;
  char *q = const_cast<char*>(cp);
  *q = 'E';
  cout << *q << endl;

  // "reinterpret_cast" dangerous feature;
  int *ip;
  char *pc = reinterpret_cast<char*>(ip);

  return 0;
}
