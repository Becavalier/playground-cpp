#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int> &vec, int index, int length) {
  if (index < length) {
    cout << vec[index] << endl;
    // Recursion;
    printVector(vec, index + 1, length);
  }
}

int main (int argc, char **argv) {
  vector<int> vec = {1, 2, 3, 4, 5, 6};
  printVector(vec, 0, 6);
  return 0;
}
