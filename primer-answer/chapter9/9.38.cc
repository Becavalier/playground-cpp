#include <vector>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  vector<int> v(10, 0);

  cout << "capacity: " << v.capacity() << endl;
  cout << "size: " << v.size() << endl;

  v.push_back(10);

  cout << "capacity: " << v.capacity() << endl;
  cout << "size: " << v.size() << endl;

  for (int i = 0; i < 10; i++) {
    v.push_back(i);
  }

  cout << "capacity: " << v.capacity() << endl;
  cout << "size: " << v.size() << endl;

  v.resize(15);

  cout << "capacity: " << v.capacity() << endl;
  cout << "size: " << v.size() << endl;  


  v.resize(99);

  cout << "capacity: " << v.capacity() << endl;
  cout << "size: " << v.size() << endl;  

  for (auto i : v) {
    cout << i << endl;
  }

  return 0;
}
