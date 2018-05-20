#include <iostream>

using namespace std;

// "Aggregate Class", no defualt value availabe;
struct Sales_data {
  string bookNo;
  unsigned units_sold;
  double revenue;
};

int main (int argc, char **argv) {
  Sales_data item = {"978-0590353403", 25, 15.99 * 25};

  return 0;
}
