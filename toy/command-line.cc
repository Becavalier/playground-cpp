#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
  map<string, string> params;
  vector<string> temp;
  int counter = 0;

  while(auto e = argv[counter]) {
    temp.push_back(string(e));
    if (counter != 0 && counter % 2 == 0) {
      params.insert(pair<string, string>(temp[counter - 1], temp[counter]));
    }
    counter += 1;
  }

  // "-t";
  if (params.find("-t") != params.end()) {
    cout << "The target platform is: " << params.find("-t")->second << endl;
  }

  // "-o";
  if (params.find("-o") != params.end()) {
    cout << "The output path is: " << params.find("-o")->second << endl;
  }

  // Get source file path;
  cout << "The input source file is: " << temp[counter - 1] << endl;

  return 0;
}
