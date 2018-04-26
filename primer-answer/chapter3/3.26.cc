#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char **argv) {
  vector<int> vec{0, 2, 5, 6, 7, 8, 11, 16};

  auto beg = vec.begin(), end = vec.end();
  // Avoid overflowing;
  auto mid = vec.begin() + (end - beg) / 2;
  int sought;
  cin >> sought;

  while (mid != end && *mid != sought) {
    if (sought < *mid) {
      end = mid;
    } else {
      beg = mid + 1;
    }
    mid = beg + (end - beg) / 2;
  }

  if (*mid != sought) {
    cout << "Not found!" << endl;
  } else {
    cout << "Fount at: " << mid - vec.begin() << endl;
  }

  return 0;
}
