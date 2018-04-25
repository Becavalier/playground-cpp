#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  string c1, c2;
  while (cin >> c1 >> c2) {
    if (c1 > c2)
      cout << c1 << endl;
    else
      cout << c2 << endl;
  }
}
