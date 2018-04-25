#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  cout << "Please input two numbers: " << endl;

  int x, y;
  cin >> x >> y;
  do {
    if (x < y)
      cout << x++ << endl;
    else
      cout << y++ << endl;
  } while((x - y) != 0);

  return 0;
}
