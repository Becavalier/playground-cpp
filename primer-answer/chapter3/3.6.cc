#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char *argv[]) {
  string line = "This is a line.";

  for (auto &c : line) {
    if (isalnum(c))
      c = 'X';
  }
  cout << line << endl;

  return 0;
}
