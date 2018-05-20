#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int x;
  cin >> x;
  cout << "std::cout: " << x << endl;
  cerr << "call std::cerr" << endl;
  clog << "call std::clog" << endl;

  return 0;
}
