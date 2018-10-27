#include <iostream>
#include <utility>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	vector<pair<string, int>> v{
		{"YHSPY", 100}
	};
	for (const auto &e : v) {
		cout << e.first << " " << e.second << endl;
	}
	
	return 0;
}
