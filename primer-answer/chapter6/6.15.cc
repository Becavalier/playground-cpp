#include <iostream>
#include <string>

using namespace std;

string::size_type find_char(const string &s, char c, string::size_type &occurs);

int main (int argc, char **argv) {
  string s = "Hello, world!";
  string::size_type counter = 0;
  cout << find_char(s, 'o', counter) << "\nCounter: " << counter << endl;
  return 0;
}

string::size_type find_char(const string &s, char c, string::size_type &occurs) {
  auto ret = s.size();
  occurs = 0;
  for (decltype(ret) i = 0; i != s.size(); ++i) {
    if (s[i] == c) {
      if (ret == s.size())
        ret = i;
      ++occurs;
    }
  }
  return ret;
}
