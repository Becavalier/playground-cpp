#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int total = 0, i;

  while (true) {
    cin >> i;
    if (i == -1) {
      break;
    }
    total += i;
  }

  cout << total << endl;
}
