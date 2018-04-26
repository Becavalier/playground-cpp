#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  vector<int> vec{0, 1, 2, 3, 4, 5};

  vector<int>::difference_type length = vec.end() - vec.begin();
  vector<int>::iterator hit = vec.begin();
  vector<int>::iterator eit = vec.end() - 1;

  for (int i = 0; i < length / 2; i++) {
    cout << *(hit++) + *(eit--) << endl;
  }
  // cout << length << endl;

  return 0;
}
