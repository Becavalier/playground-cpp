#include <iostream>
#include <vector>

using namespace std;

class Person {
  string name;
  vector<Person> collect;

public:
  Person () = default;
  explicit Person (const string &name) : name(name) {}

  void combineFriend (Person p) {
    this->collect.push_back(p);
  }

  void printFriendsName (void) {
    for (auto p : this->collect) {
      cout << p.name << endl;
    }
  }
};


int main (int argc, char **argv) {
  Person p("YHSPY");
  // explicit -> no conversion;
  // [temp object]
  p.combineFriend(Person("Alice"));
  p.combineFriend(static_cast<Person>("Bob"));
  // p.combineFriend(string("Mike"));

  p.printFriendsName();
  return 0;
}
