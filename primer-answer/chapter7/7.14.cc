#include <iostream>
#include <string>

using namespace std;

class Company {
  string name;
  int crewNum;
  int age = 0;

public:
  Company (string name, int crewNum) : name(name), crewNum(crewNum){}
  Company (string name, int crewNum, int age);

  string getName () const {
    return name;
  }

  int getAge () const {
    return age;
  }
};

Company::Company (string name, int crewNum, int age) {
  this->name = name;
  this->crewNum = crewNum;
  this->age = age;
}

int main (int argc, char **argv) {
  Company c1 = {"Ele", 10};
  Company c2 = {"Apple", 11, 1};

  cout << c1.getName() << " " << c1.getAge() << endl;
}
