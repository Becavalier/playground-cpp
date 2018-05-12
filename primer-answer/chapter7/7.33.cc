#include <iostream>

using namespace std;

class Screen;

class Window_mgr {
public:
  void clear (const Screen &s);
};

class Screen {
  using pos = int;

  friend void Window_mgr::clear(const Screen &s);
  int x;

public:
  pos size() const;
  Screen (int x) : x(x) {}
};

void Window_mgr::clear(const Screen &s) {
  cout << "Clear: " << s.x << endl;
}

Screen::pos Screen::size() const {
  cout << "Screen::size()" << endl;
  return x;
}

int main (int x, char **arv) {
  Screen s = {10};
  s.size();

  Window_mgr *w = new Window_mgr();
  w->clear(s);
}
