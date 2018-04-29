#include <iostream>
#include <string>

using namespace std;

int main (int argc, char *argv[]) {
  char c1, c2;
  int counter = 0;

  while (cin >> c1) {
    switch (c1) {
      case 'f':
        {
          cin >> c2;
          switch (c2) {
            case 'f':
            case 'l':
            case 'i':
            counter++;
            break;
        }
        break;
      }
    }
    cout << "Total: " << counter << endl;
  }

  return 0;
}
