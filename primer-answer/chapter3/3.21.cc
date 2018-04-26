#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char **argv) {
  vector<int> vec{1, 2, 3, 4, 5, 6};

  vector<int>::iterator it = vec.begin();
  for (; it != vec.end(); it++) {
    cout << *it << endl;
  }
  return 0;
}
