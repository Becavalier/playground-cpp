#include <iostream>
#include <string>

using namespace std;

istream& logAll(istream& in) {
  string t;
  while(in >> t) {
    cout << t << endl;
    in.clear(~(~in.rdstate() & ~in.eofbit));
  }
  in.clear();
  return in;
}

int main (int argc, char **argv) {
  istream& in = logAll(cin);

  string _t;
  cin >> _t;
  cout << _t << endl;
  return 0;
}
