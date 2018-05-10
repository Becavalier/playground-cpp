#include <iostream>

using namespace std;

class Y {
  friend ostream& operator<<(ostream &out, const Y &o);
  int data;

public:
  Y (int data) : data(data) {}
};

// Friend furnction;
ostream& operator<<(ostream &out, const Y &o){
  return out << o.data;
}

int main (int argc, char **argv) {
  Y y = {101};
  cout << y << endl;
  return 0;
}
