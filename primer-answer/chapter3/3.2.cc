#include <string>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  string line, word;
  while (getline(cin, line)) {
    cout << line << endl;
    if (line == "end") {
      break;
    }
  }

  while(cin >> word) {
    cout << word << endl;
  }

  return 0;
}
