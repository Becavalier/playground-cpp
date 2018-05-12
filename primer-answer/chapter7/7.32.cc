#include <iostream>

using namespace std;

class Screen;
class Window_mgr {
  public:
    // Declare without defination;
    void clear (const Screen &s);
};

class Screen {
  friend void Window_mgr::clear(const Screen &s);
  int x;

  public:
  Screen(int x) : x(x) {};
};

void Window_mgr::clear (const Screen &s) {
  cout << "Clear: " << s.x << endl;
}


int main (int argc, char **argv) {
  Screen s = {10};
  Window_mgr *w = new Window_mgr();
  w->clear(s);

  return 0;
}
