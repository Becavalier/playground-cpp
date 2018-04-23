#include <iostream>

using namespace std;

template <class T>
T sum (T a, T b) {
  T result;
  result = a + b;
  return result;
}

template <class T, class U>
bool are_equal (T a, U b) {
  return  (a == b);
}

template <class T, int N>
T fixed_multiply (T val) {
  return val * N;
}

int main (int argc, char **argv) {
  int i = 5, g = 5, h;
  double f = 2.0, l = 1.9, n;
  h = sum<int>(i, g);
  n = sum<double>(f, l);
  cout << h << " " << n << endl;

  // Automatic-Template-Parameter-Deduction;
  if (are_equal(10, 10.0)) {
    cout << "x and y are equal!" << endl;
  }

  // Non-type template arguments;
  cout << fixed_multiply<double, 1>(10) << endl;

  return 0;
}
