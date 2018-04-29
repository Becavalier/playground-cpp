#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int total = 0, val = 0;
  while(val <= 10)
    total += val, val++;

  cout << total << endl;
  return 0;
}
