#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main (int argc, char **argv) {
  using dq = deque<int>;
  list<dq> l;

  // dq d(10, 1);
  dq d = {1, 2, 3, 4, 5};
  l.push_back(d);

  for (const auto e : l) {
    for (auto i = e.begin(); i != e.end(); i++) {
      cout << *i << endl;
    }
  }

  return 0;
}
