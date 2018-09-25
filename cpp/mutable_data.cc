#include <iostream>

using namespace std;

class Screen {
  public:
    void funcA () const;
    size_t getAccessTimes () const {
      return access_ctr;
    }
  private:
    mutable size_t access_ctr;
};

void Screen::funcA () const {
  // Editable only for mutable members;
  ++access_ctr;
}


int main (int argc, char **argv) {
  Screen *s = new Screen();
  s->funcA();
  cout << s->getAccessTimes() << endl;
  s->funcA();
  cout << s->getAccessTimes() << endl;
}
