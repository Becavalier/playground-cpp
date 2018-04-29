#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int grade;
  cin >> grade;
  if (grade == 100) {
    cout << "Perfect Grade!" << endl;
  } else if (grade > 60 && grade <= 100) {
    cout << "Good Grade!" << endl;
  } else {
    cout << "Bad Grade!" << endl;
  }
  return 0;
}
