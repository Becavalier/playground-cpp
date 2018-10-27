#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main(int argc, char **argv) {
	map<string, vector<int>> m = {
		{
			"A", {1, 2, 3}
		},
		{
			"B", {9, 3, 4}
		}
	};

	auto x = m.find("B");
	if (x != end(m)) {
		for (const auto &e : x->second) {
			cout << e << endl;
		}
	}
	
	return 0;
}
