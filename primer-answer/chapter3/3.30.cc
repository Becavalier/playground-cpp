#include <iostream>
#include <cstddef>

using namespace std;

int main (int argc, char *argv[]) {
  constexpr size_t array_size = 10;
  int ia[array_size];
  for (size_t ix = 0; ix < array_size; ix++) {
    ia[ix] = ix;
  }
  return 0;
}
