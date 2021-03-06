#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

bool findElement(vi::iterator &begin, vi::iterator &end, const int value) {
  while(begin != end) {
    if (*begin == value) {
      return true;
    }
    begin++;
  }
  return false;
}

int main (int argc, char **argv) {
  vi v{1, 2, 3, 4, 5, 6};
  vi::iterator begin = v.begin();
  vi::iterator end = v.end();
  cout << findElement(begin, end, 10) << endl;

  return 0;
}
