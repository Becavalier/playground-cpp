#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char **argv) {
  int arr[] = {0, 1, 2, 3, 4, 5};
  vector<int> vec(begin(arr), end(arr));

  for (auto e : vec) {
    cout << e << endl;
  }
  return 0;
}
