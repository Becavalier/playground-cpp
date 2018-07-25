#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  cout << unitbuf;

  cout << "Hello!" << endl;
  cout << "Hello!" << flush;
  cout << "Hello!" << ends;

  cout << nounitbuf;
  return 0;
}
