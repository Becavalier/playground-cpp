#include <string>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  string s1;
  string s2 = s1;
  // Copy initilization;
  string s3 = "hiya";
  // Directly initilization;
  string s4(10, 'c');
  string s5 = string(10, 'c');
  /*
   * string temp(10, 'c');
   * string s5 = temp;
   */

  string s6;
  cin >> s6;
  cout << s6 << endl;

  string line;
  // Type of string::size_type;
  string::size_type lineLength;
  while(getline(cin, line)) {
    lineLength = line.size();
    cout << lineLength << ": " << line << endl;
  }

  // "+"
  cout << s3 + s4 << endl;


  return 0;
}
