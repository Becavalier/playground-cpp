#include <iostream>
#include <string>

using namespace std;

class Sales_data {
  string bookNo;
  unsigned units_sold;
  int revenue;

public:
  Sales_data(string s, unsigned cnt, double price) : bookNo(s), units_sold(cnt), revenue(cnt * price) {}

  // Delegate constructor
  Sales_data() : Sales_data("", 0, 0) {}
  Sales_data(string s) : Sales_data(s, 0, 0) {
    cout << "Call Sales_data(strin s);" << endl;
  }
  Sales_data(istream &is) : Sales_data() {
    // read(is, *this);
  }
};


int main (int argc, char **argv) {
  Sales_data s("WebAssembly");
  return 0;
}
