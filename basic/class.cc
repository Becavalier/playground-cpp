#include <iostream>
#include <string>

using namespace std;

class Person {
// Default is private;

  string name;
  int age;

  public:
    Person(const string &name, int age) : name(name), age(age) {}
};

struct Book {
// Default is public;
  Book(const string &name, int price) : name(name), price(price) {}

  private:
    string name;
    int price;
};

int main (int argc, char **argv) {
  Person p = {"YHSPY", 12};
  Book b = {"WebAssembly", 79};
  return 0;
}
