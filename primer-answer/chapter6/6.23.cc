#include <iostream>
#include <iterator>

using namespace std;

void print(const int x);
void print(const int *x, int count);
void print(const int *start, const int *end);

int main (int argc, char **argv) {
  int i = 0, j[2] = {0, 1};
  print(i);
  print(j, 2);
  print(begin(j), end(j));
  return 0;
}

void print (const int x) {
  cout << x << endl;
}

void print (const int *x, int count) {
  for (int i = 0; i < count; i++) {
    cout << *(x + i) << endl;
  }
}

// With itertor;
void print (const int *start, const int *end) {
  for (;start != end; start++) {
    cout << *start << endl;
  }
}
