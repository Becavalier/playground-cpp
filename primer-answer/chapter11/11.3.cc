#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(int argc, char **argv) {
	set<string> exclude{
		"Hi", "Hello"
	};
	map<string, size_t> m;
	string s;
	
	while(cin >> s) {
		if (s == "exit")
			break;
		if (exclude.find(s) == exclude.end()) {
			++m[s];
		}
	}

	for (const auto &t : m) {
		cout << t.first << ": " << t.second << endl;
	}

	return 0;
}