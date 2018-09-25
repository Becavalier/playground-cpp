#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main () {
  char s[] = {'H', 'e', 'l', 'l', 'o', 'w', '\0'};

  cout << strlen(s) << endl;

  string s2 = "World!";
  // Get a "C" like string pointer;
  const char *const str = s2.c_str();

  return 0;
}
