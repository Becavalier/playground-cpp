#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char **argv) {
  const vector<int> v{0, 1, 2, 3};

  /*
  vector<int>::iterator iter_begin = v.begin();
  vector<int>::iterator iter_end = v.end();

  while (iter_begin != iter_end) {
    cout << *(iter_begin++) << endl;
  }
  */

  // "const" version;
  vector<int>::const_iterator const_iter_begin = v.cbegin();
  vector<int>::const_iterator const_iter_end = v.cend();

  while(const_iter_begin != const_iter_end) {
    cout << *(const_iter_begin++) << endl;
  }

  return 0;
}
