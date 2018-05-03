#include <iostream>
#include <string>

#define SIZE 2

using namespace std;

using arrT = string[SIZE];

string arrTemplate[SIZE];


string (&funcA(string (&arr)[SIZE])) [SIZE];
auto funcB (string (&arr)[SIZE]) -> string (&)[SIZE];
arrT& funcC (arrT &arr);
decltype(arrTemplate) &funcD (decltype(arrTemplate) &arr);

int main (int argc, char **argv) {
  string arr[] = {"orange", "apple"};
  string (&refA)[SIZE] = funcA(arr);
  string (&refB)[SIZE] = funcB(arr);
  arrT &refC = funcC(arr);
  decltype(arrTemplate) &refD = funcD(arr);
  for (auto e : refD) {
    cout << e << endl;
  }
  return 0;
}

string (&funcA(string (&arr)[SIZE])) [SIZE] {
  return arr;
}

auto funcB (string (&arr)[SIZE]) -> string (&)[SIZE] {
  return arr;
}

arrT& funcC (arrT &arr) {
  return arr;
}

decltype(arrTemplate) &funcD (decltype(arrTemplate) &arr) {
  return arr;
}
