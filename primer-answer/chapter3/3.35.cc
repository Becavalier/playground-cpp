#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  constexpr unsigned int arr_length = 5;

  int arr[arr_length] = {1, 2, 3, 4, 5};

  for (auto &x : arr) {
    x = 0;
  }

  for (int i = 0; i < arr_length; i++) {
    arr[i] = 0;
  }
  return 0;
}
