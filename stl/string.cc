#include <string>
#include <cctype>
#include <locale>
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

    if (lineLength == 2)
      break;
  }

  // "+"
  cout << s3 + s4 << endl;

  // Standard string dealing procedures <cctype>
  cout << isalnum(s3[0]) << endl;

  // Use "for" to iterate string
  for (auto c : (s3 + s4)) {
    cout << "char: " << c << endl;
  }
 
  string s("Hello World!!");
  decltype(s3.size()) punct_cnt = 0;
  for (auto c : s) {
    if (ispunct(c))
      ++punct_cnt;
  }
  cout << "The punct count is: " << punct_cnt << endl;

  for (auto &c : s) {
    c = toupper(c);
  }
  cout << s << endl;

  const string hexdigits = "0123456789ABCDEF";
  cout << "Input numbers: " << endl;
  string result;
  string::size_type n;
  while (cin >> n) {
    if (n == 0)
      break;
    if (n < hexdigits.size())
      result += hexdigits[n];
  }
  cout << "Result: " << result << endl;


  // Readable and writable (!!only read or edit with iterator!!);
  for (string::iterator it = s3.begin(); it != s3.end(); it++) {
    *it = 'j';
    cout << *it << endl;
    // cout << (*it).empty() << endl;
  }

  // Read only;
  for (string::const_iterator it = s3.begin(); it != s3.end(); it++) {
    cout << *it << endl;
  }

  for (auto it = s3.cbegin(); it != s3.cend(); it++) {
    cout << *it << endl;
  }


  return 0;
}
