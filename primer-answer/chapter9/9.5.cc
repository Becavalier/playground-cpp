#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

const vi::iterator& findElement(vi::iterator &begin, vi::iterator &end, const int value) {
  while(begin != end) {
    if (*begin == value) {
      return begin;
    }
    begin++;
  }
  return end;
}

int main (int argc, char **argv) {
  vi v{1, 2, 3, 4, 5, 6};
  vi::iterator begin = v.begin();
  vi::iterator end = v.end();
  cout << *findElement(begin, end, 1) << endl;

  return 0;
}
