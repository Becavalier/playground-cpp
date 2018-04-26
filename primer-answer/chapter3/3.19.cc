#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
  vector<int> v1(10, 42);
  vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
  vector<int> v3(10);
  for (int i = 0; i < 10; i++) {
    v3.push_back(42);
  }

  return 0;
}
