#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main (int argc, char **argv) {
  vector<char> c;
  char s;

  // ifstream in("8.4.cc");
  fstream in;
  in.open("8.4.cc", ios::in);

  while(in >> s) {
    c.push_back(s);
  }

  for (auto s : c) {
    cout << s << endl;
  }

  in.close();

  return 0;
}
