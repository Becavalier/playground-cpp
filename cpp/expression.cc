#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int a = 1;
  int b = 2;
  decltype(a + b) c = 3;

  cout << c << endl;



  return 0;
}
