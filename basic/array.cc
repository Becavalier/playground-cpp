#include <iostream>
#include <string>
#include <cstddef>
#include <iterator>

using namespace std;

int pz[10];

int main(int argc, char *argv[]) {
  constexpr unsigned int sz = 42;
  const int cnt = 10;
  int arr[10];
  int *parr[sz];
  string bad[cnt];

  int ia1[sz] = {0, 1, 2};
  int a2[] = {0, 1, 2};

  char a3[] = "C++";

  int (*Parray)[3] = &a2;
  int (&arrRef)[3] = a2;

  int *(&arry)[42] = parr;

  cout << pz[0] << endl << arr[0] << endl;

  // Access;
  for (auto i : a2) {
    cout << i << endl;
  }

  // Pointer and Array;
  string nums[] = {"a", "b"};
  string *p = &nums[0];
  string *p2 = nums;

  // auto ia2(nums); -> (pointer)
  decltype(nums) ias = {"c", "d"};

  // Iterator;
  int *beg = begin(ia1);
  int *last = end(ia1);

  constexpr size_t sz2 = 5;
  int arr2[sz2] = {1, 2, 3, 4, 5};
  int *ip = arr2;
  int *ip2 = ip + 4;
  int *ip3 = &arr2[2];

  cout << "The element is: " << ip3[-2] << endl;

  return 0;
}
