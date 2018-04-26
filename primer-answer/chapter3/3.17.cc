#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char **argv) {
  string word;
  vector<string> vec;

  while (cin >> word) {
    for (auto &c : word) {
      c = toupper(c);
    }
    vec.push_back(word);

    if (word == "END")
      break;
  }

  for (auto e : vec) {
    cout << e << endl;
  }

  return 0;
}
