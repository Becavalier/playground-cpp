#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char *argv[]) {
  string line = "This is a line.";

  string::iterator it = line.begin();
  while (it != line.end()) {
    if (isalnum(*it)) {
      *it = 'X';
    }
    it++;
  }

  cout << line << endl;
  return 0;
}
