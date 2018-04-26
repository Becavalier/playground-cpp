#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  vector<int> vec;
  int num;

  while (cin >> num) {
    vec.push_back(num);
    if (num == -1)
      break;
  }

  const vector<int>::size_type half_size = vec.size() / 2;
  const vector<int>::size_type full_size = vec.size();

  for (int i = 0; i < half_size; i++) {
    cout << (vec[i] + vec[full_size - i - 1]) << endl;
  }
  return 0;
}
