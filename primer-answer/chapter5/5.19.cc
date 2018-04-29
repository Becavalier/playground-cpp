#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  string s1, s2;
  do {
    cout << "Please input two strings: " << endl;
    cin >> s1;
    cin >> s2;

    cout << "The shorter is:" << (s1 > s2 ? s2 : s1) << endl << endl;
  } while(true);
  return 0;
}
