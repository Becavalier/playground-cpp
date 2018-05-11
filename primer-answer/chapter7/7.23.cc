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
    contents += c;
  }

private:
  pos width, height;
  pos cursor;
  string contents = "";
};

void printContent (const Screen &s) {
  cout << s.contents << endl;
}

int main (int argc, char **argv) {
  Screen s = {10, 10, 'Y'};
  printContent(s);
  return 0;
}
