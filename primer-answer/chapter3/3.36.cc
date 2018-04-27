#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
  constexpr unsigned int length = 4;
  int x[length] = {1, 2, 4, 5};
  int y[length] = {1, 4, 5, 7};

  for (int i = 0; i < length; i++) {
    if (x[i] != y[i]) {
      break;
    }
  }
  cout << "Equal!" << endl;

  // vector
  vector<int> v1 = {1, 2, 3};
  vector<int> v2 = {1, 2, 3};
  if (v1 == v2)
    cout << "Compare result: Equal!"<< endl;
  else
    cout << "Compare result: Not Equal!" << endl;
  return 0;
}
