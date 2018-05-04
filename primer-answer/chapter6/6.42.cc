#include <iostream>
#include <string>

using namespace std;

string make_plural (const string &word, const string &ending = "s") {
  return word + ending;
}

int main (int argc, char **argv) {
  string s1 = "failure";

  cout << make_plural(s1) << endl;
  return 0;
}

