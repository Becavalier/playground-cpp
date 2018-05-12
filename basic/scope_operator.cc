#include <iostream>

using namespace std;

int height = 100;
int width = 100;

class classA {
public:
  classA () = default;

  void print (int height, int width) {
    ::height = height;
    ::width = width;
  }
};


int main (int argc, char **argv) {
  classA *c = new classA();
  c->print(9, 9);

  cout << "Global height: " << height << endl;
  cout << "Global width: " << width << endl;
  return 0;
}
