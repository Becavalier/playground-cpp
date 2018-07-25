#include <fstream>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  if (argc == 1) {
    cerr << "Wrong arguments number!" << endl;
    return 1;
  }
  const char* fileName = argv[1];
  ofstream out(fileName, ios::app);

  out << "Save something here.";
  out.close();
  return 0;
}
