#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  string s1;
  string s2;
  int counter = 1;

  while (cin >> s1) {
    while (cin >> s2) {
      if (s2 == s1) {
        counter++;
      } else {
        break;
      }
    }
    cout << "Result: " << counter << endl;
    counter = 1;
  }
  return 0;
}
