#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main (int argc, char **argv) {
  vector<string> s;
  string line;

  // ifstream in("8.4.cc");
  fstream in;
  in.open("8.4.cc", ios::in);

  while(getline(in, line)) {
    s.push_back(line);
  }

  for (auto str : s) {
    cout << str << endl;
  }

  in.close();

  return 0;
}
