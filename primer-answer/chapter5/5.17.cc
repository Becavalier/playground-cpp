#include <vector>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  vector<int> v1 = {1, 2, 3, 4, 5};
  vector<int> v2 = {1, 2, 3};
  bool result = true;

  for (decltype(v2.size()) i = 0; i < v2.size(); i++) {
    if (v1[i] != v2[i]) {
      result = false;
      break;
    }
  }

  cout << (result ? "Equal!" : "Not Equal!") << endl;
  return 0;
}
