#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  ifstream in("./8.10.data");
  vector<string> records;
  string line;

  while(getline(in, line)) {
    records.push_back(line);
  }
  in.close();

  for (auto i : records) {
    istringstream ist(i);
    string temp;
    while (ist >> temp) {
      cout << temp << endl;
    }
  }

  return 0;
}
