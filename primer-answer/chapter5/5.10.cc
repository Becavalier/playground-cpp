#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  // Use "a" for instance;
  char t;
  int counter = 0;
  while (cin >> t) {
    switch (t) {
      case 'a':
      case 'A':
        counter++;
        break;
    }
    cout << "Total: " << counter << endl;
  }
  return 0;
}
