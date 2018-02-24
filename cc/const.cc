#include <iostream>
#include <string>

using namespace std;


string job()
{
  return "This is the job content!";
}

int main()
{
  // reference to const
  const int ci = 1024;
  const int &r1 = ci;

  int i = 42;
  const int &r2 = i;
  const int &r3 = 42;
  const int &r4 = r2 * 2;
  int n = r1 * 2;
  cout << n << endl;

  // invalid: the evaluation of expression is stored in a temporary object cannot be passed to a referene!!!
  // int &t = 1 + 2;

  int &r5 = i;
  const int &r6 = i;
  r5 = 0;

  const double pi = 3.14;
  const double *cptr = &pi;

  int errNumb = 0;
  int *const curErr = &errNumb;
  const double *const pip = &pi;
  int *const *const cpi = &curErr;
  cout << cpi << endl;



  // top-level const and bottom-level const
  int j = 0;
  int *const p1 = &j;   // top-level
  const int ci2 = 42;   // top-level
  const int *p2 = &ci2;  // bottom-level
  const int *const p3 = p2;
  const int &r = ci2;


  // constant expression
  const int max_files = 20;
  const int limit = max_files + 1;
  int staff_size = 27;

  constexpr int mf = 20;
  constexpr int limit_const = mf + 1;

  const int *p = nullptr;
  // same type
  constexpr int *q1 = nullptr;
  int *const q2 = nullptr;

  // constexpr int l = 33;
  // int m = 9;
  constexpr const int *p4 = &l;
  constexpr int *pl = &m;

  const string& content = job();
  return 0;
}
