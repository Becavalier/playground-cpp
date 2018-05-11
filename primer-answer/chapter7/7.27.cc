#include <iostream>
#include <string>

using namespace std;

class Screen {
  friend void printContent (const Screen &s);
  public:
  typedef string::size_type pos;

  Screen () = default;
  Screen (pos width, pos height) : width(width), height(height) {}
  Screen (pos width, pos height, char c) : width(width), height(height) {
    contents = string(width * height, c);
  }

  Screen& move(pos r, pos c);
  inline Screen& set(char c);
  inline Screen& set(pos r, pos col, char ch);

  Screen &display(ostream &os) {
    do_display(os);
    return *this;
  }

  private:
  pos width, height;
  pos cursor;
  string contents = "";

  void do_display(ostream &os) const {
    os << contents;
  }
};


Screen& Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
}

Screen& Screen::set(char c) {
  contents[cursor] = c;
  return *this;
}

Screen& Screen::set(pos r, pos col, char ch) {
  contents[r * width + col] = ch;
  return *this;
}

void printContent (const Screen &s) {
  cout << s.contents << endl;
}

int main (int argc, char **argv) {
  Screen s = {10, 10, ' '};
  s.move(4, 0).set('#').display(cout);
  // printContent(s);
  return 0;
}

