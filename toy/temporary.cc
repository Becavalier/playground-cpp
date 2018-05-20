#include <string>
#include <iostream>

using namespace std;

int add (const int &x, const int &y) {
  const int &z = 10;
  return x + y + z;
}

class Sandbox {
  public:
    Sandbox(const string &n) : member(n) {}
    const string &member;
};

int main (int argc, char **argv) {
    Sandbox sandbox(string("four"));
    cout << "The answer is: " << endl;
    cout << sandbox.member << endl;

    // Local temp const variables;
    cout << add(1, 2) << endl;
    return 0;
}
