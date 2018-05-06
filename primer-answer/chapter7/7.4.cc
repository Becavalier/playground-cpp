#include <iostream>
#include <string>

using namespace std;

class Person {
  string name;
  string address;
  int age;

  public:

  string getAddress() const {
    return address;
  }

  string getName() const {
    return name;
  }

  Person(string name, string address, int age): name(name), address(address), age(age){};
};


int main (int argc, char **argv) {
  Person p = {
    "YHSPY", "ShangHai", 24
  };
  cout << p.getName() << endl;
  cout << p.getAddress() << endl;
  return 0;
}
