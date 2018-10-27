#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <set>

using namespace std;

int main(int argc, char **argv) {
	multimap<string, string> mm {
		{
			"A", "A"
		},
		{
			"A", "B"
		},
		{
			"A", "C"
		}
	};

	map<string, set<string>> s;
	for (const auto &e : mm) {
		s[e.first].insert(e.second);
	}

	for (const auto &e : s) {
		cout << e.first << ": " << endl;
		for (const auto &c : e.second) {
			cout << c << endl;
		}
	}

	return 0;
}
