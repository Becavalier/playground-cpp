#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  const string ifile = "io_state.cc";

  /*
  ifstream inStream;
  inStream.open(ifile);
  */

  ifstream in(ifile);
  if (in.is_open()) {
    cout << "File Opened!" << endl;
  }

  return 0;
}
