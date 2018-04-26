#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  string word, line;

  while(cin >> word) {
    cout << (line += word) << endl;
  }

  return 0;
}


