#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  string s1;
  string s2;

  cin >> s1;
  while (cin >> s2) {
    if (s2 == s1) {
      cout << "The repeat word is: " << s2 << endl;
      break;
    }
    s1 = s2;
  }
  return 0;
}
