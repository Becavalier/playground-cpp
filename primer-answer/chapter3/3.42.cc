#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
  vector<int> vec{1, 2, 3, 4, 5};
  int arr[5], counter = 0;

  for (auto e : vec) {
    arr[counter++] = e;
  }

  return 0;
}
