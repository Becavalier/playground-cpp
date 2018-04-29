#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  char c;
  int total = 0;
  // Or use string here is better;
  while (cin >> c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      total++;
    }
    cout << "Total: " << total << endl;
  }
  return 0;
}
