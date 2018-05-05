#include <iostream>
#include <vector>

using namespace std;

int funcA(int, int);

int main (int argc, char **argv) {
  int (*p)(int, int);
  vector<int (*)(int, int)> vec = {p};
  return 0;
}


int funcA (int x, int y) {
  return x + y;
}
