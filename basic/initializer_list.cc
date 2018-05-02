#include <iostream>
#include <initializer_list>

using namespace std;

void error_msg (initializer_list<string> il) {
  // il is "const *string";
  for (auto beg = il.begin(); beg != il.end(); ++beg) {
    cout << *beg << " ";
  }
  cout << endl;
}

int main (int argc, char **argv) {
  error_msg({"functionx", "exprected", "actual"});
  return 0;
}
