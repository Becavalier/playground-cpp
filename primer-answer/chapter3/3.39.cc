#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
  string s1 = "abcde";
  string s2 = "abcdef";

  char s3[] = "abc";
  char s4[] = "abcd";

  cout << s1 + s2 << endl;
  cout << strcmp(s3, s4) << endl;
  return 0;
}
