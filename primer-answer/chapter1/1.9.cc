#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int total = 0, end = 50;
  while (end <= 100) {
    total += end++;
  }

  cout << total << endl;
}
