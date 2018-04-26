#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main (int argc, char *argv[]) {
  string line;

  while (cin >> line) {
    for (auto &c : line) {
      if (ispunct(c)) {
        c = ' ';
      }
    }
    cout << line << endl;
  }
  return 0;
}
