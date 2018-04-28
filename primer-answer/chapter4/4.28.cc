#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  constexpr size_t size_int = sizeof(int);
  constexpr size_t size_double = sizeof(double);
  constexpr size_t size_longlong = sizeof(long long);

  vector<int> vec{1, 2, 3, 4, 5};
  cout << sizeof(vec) << endl;

  string s = "HELLO";
  cout << sizeof(s) << endl;

  int arr[] = {1, 2, 4, 5, 6};
  cout << "The length of array is: " << sizeof(arr) / sizeof(*arr) << endl;
  return 0;
}
