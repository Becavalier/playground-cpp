#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

  public:
  // Default as "inline", read only "const 'this'";
  string isbn() const {
    return bookNo;
  }
  Sales_data& combine(const Sales_data&);
  double avg_price() const;

  Sales_data() = default;
  Sales_data(const string &s): bookNo(s) {}
  Sales_data(const string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) {}
  Sales_data(istream&);
};

Sales_data add(const Sales_data&, const Sales_data&);
ostream &print(ostream&, const Sales_data&);
istream &read(istream&, Sales_data&);

// Implicit transform to use "this" in class context;
double Sales_data::avg_price() const {
  if (units_sold)
    return revenue / units_sold;
  else
    return 0;
}

Sales_data& Sales_data::combine (const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  // Here "this" is a pointer;
  return *this;
}

int main (int argc, char **argv) {
  return 0;
}
