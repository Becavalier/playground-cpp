#include <iostream>

using namespace std;

int main() {

  // tranditional style;
  typedef double wages;
  typedef wages base, *p;

  // new standard of defining an alias for distinct type;
  using wages2 = double;
  wages2 d1 = 1.1;
  cout << d1 << endl;


  typedef char *pstring;
  // const -> (type)
  const pstring cstr = 0;
  const pstring *ps;
  // const char -> (point type)
  const char *cstr2 = 0;

  // "auto" keyword
  int val1 = 1;
  int val2 = 2;
  auto item = val1 + val2;
  auto i = 0, *p2 = &val1;

  // invalid: not in the same type;
  // auto sz = 0, pi = 3.14;

  int j = 0, &r = i;
  auto a = r;

  const int ci = j, &cr = ci;
  auto b = ci;
  auto c = cr;
  auto d = &j;
  auto e = &ci;
  const auto f = 42;

  auto &g = ci;
  const auto &h = 42;

  // decltype
  const int ci2 = 0, &cj2 = ci2;
  decltype(ci2) x = 0;
  decltype(cj2) y = x;

  int a2 = 42, *p3 = &a2, &r2 = a2;
  decltype(r2 + 0) b2;   // int, evaluatei the result of the expression;
  decltype(*p3) c2 = a2;  // reference, because of the de-reference pointer operation;
  decltype((a2)) d2 = a2;  // refrence;


}
