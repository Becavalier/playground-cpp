#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {

  vector<int> vec = {1, 2, 3, 4, 5};
  vector<int>::size_type total = vec.size();

  for (auto e : vec) {
    cout << e << endl;
  }
  cout << "The amount of vector is: " << total << endl;

  return 0;
}
