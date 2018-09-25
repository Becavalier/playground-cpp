#include <iostream>
#include <string>

using namespace std;


// "Aggregate Class"
struct SalesData {
  string bookNo;
  unsigned units_sold;
  double revenue;
};

// Not a "Aggregate Class";
struct Person {
  Person(int age, string name) {
    this->age = age;
    this->name = name;
  }

  int age;
  string name;
};

int main(int argc, const char *argv[]) {
  SalesData s = {
    "WebAssembly",
    1000,
    1.1
  };

  Person p = Person(10, "YHSPY");
  cout << p.age << p.name << endl;

  cout << s.bookNo << endl;
  return 0;
}
