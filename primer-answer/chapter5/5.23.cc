#include <iostream>
#include <stdexcept>

using namespace std;

int main (int argc, char **argv) {
  int x, y;
  cin >> x >> y;
  try {
    cout << x / y << endl;
  } catch (exception e) {
    cout << e.what() << endl;
  }

  return 0;
}
