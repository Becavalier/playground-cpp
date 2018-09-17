#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char** argv) {
  vector<int> v1(10, 1);
  vector<int> v2 = {0, 1, 2, 3};
  vector<int> v3{0, 1, 2, 3};
  vector<int> v4(10);
  vector<int> v5(v2);
  vector<int> v6(v1.begin(), v1.end());

  for (auto i : v6) {
    cout << i << endl;
  }
  return 0;
}
