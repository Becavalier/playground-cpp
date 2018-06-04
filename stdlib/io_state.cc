#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  cout << "cin.good(): " << cin.good() << endl;
  cout << "cin.bad(): " << cin.bad() << endl;
  cout << "cin.fail(): " <<cin.fail() << endl;
  cout << "cin.eof(): " << cin.eof() << endl;

  // return [type: iostate];
  auto state = cin.rdstate();
  // reset all symbols;
  cin.clear();
  cin.setstate(state);

  // reset to a specific state;
  cin.clear(cin.rdstate() & ~cin.failbit & ~cin.badbit);
  cout << state << endl;

  // bit position (mask style);
  // eg: 4 -> 1000 > "~" -> 0111 -> "&" -> [reset]
  cout << "cin.failbit: " << cin.failbit << endl;
  cout << "cin.badbit: " << cin.badbit << endl;
  cout << "cin.eofbit: " << cin.eofbit << endl;
  cout << "cin.goodbit: " << cin.goodbit << endl;
  return 0;
}
