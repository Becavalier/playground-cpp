#include <iostream>
#include <string>

using namespace std;

const string &shorterString(const string &s1, const string &s2) {
  cout << "-> const version;" << endl;
  return s1.size() >= s2.size() ? s2 : s1;
}

// "bottom" const;
string &shorterString(string &s1, string &s2) {
  cout << "-> non-cosnt version;" << endl;
  auto &r = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));
  return const_cast<string&>(r);
}


int main (int argc, char **argv) {
  const string s1 = "apple";
  const string s2 = "banana";

  cout << "The shorter one is:" << endl << shorterString(s1, s2) << endl;

}
