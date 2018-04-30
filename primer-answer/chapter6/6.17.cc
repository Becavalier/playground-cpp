#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool hasCap(const string &str);
void toLowerCase(string &str);

int main (int argc, char **argv) {
  string s = "Hello, world!";
  cout << hasCap(s) << endl;

  toLowerCase(s);
  cout << s << endl;
  return 0;
}

bool hasCap (const string &str) {
  for (auto e : str) {
    if (isupper(e)) {
      return true;
    }
  }
  return false;
}

void toLowerCase (string &str) {
  for (auto &e : str) {
    e = tolower(e);
  }
}
