#include <iostream>
#include <initializer_list>

using namespace std;

void sum (initializer_list<int> nums) {
  int total = 0;
  for (auto i = nums.begin(); i != nums.end(); i++) {
    total += (*i);
  }
  cout << total << endl;
}

void sumByRange (initializer_list<int> nums) {
  int total = 0;
  // Immutable;
  for (const auto &e : nums) {
    total += e;
  }
  cout << total << endl;
}

int main (int argc, char **argv) {
  sum({1, 2, 3, 4});
  sumByRange({1, 2, 3, 4, 5});

  return 0;
}
