#include <array>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  array<int, 42> arr = {0, 1, 2, 3, 4, 5};

  for (auto i : arr) {
    cout << i << endl;
  }
  return 0;
}
