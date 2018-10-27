#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	map<string, vector<string>> family = {
		{"Jason", {
			"Smith", "Lingo"
		}}
	};

	family["Jason"].push_back("Yu");

	for (const auto &e : family) {
		cout << e.first << endl;
		for (auto &name : e.second) {
			cout << name << ", ";
		}
		cout << endl;
	}
	return 0;
}
