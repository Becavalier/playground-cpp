#include <cstring>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  char s1[] = {'a', 'b', '\0'};
  char s2[] = {'c', 'd', '\0'};
  char s3[5];

  strcpy(s3, s1);
  strcat(s3, s2);

  cout << s3 << endl;
  return 0;
}
