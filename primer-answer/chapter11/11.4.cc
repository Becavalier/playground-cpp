#include <iostream>
#include <map>
#include <set>

using namespace std;

void validate(string &w) {
	string s;
	for (auto c : w) {
		if (!ispunct(c)) {
			s += tolower(c);
		}
	}
	w = s;
}

int main(int argc, char **argv) {
	set<string> exclude{
		"Hi", "Hello"
	};
	map<string, size_t> m;
	string s;
	
	while(cin >> s) {
		validate(s);
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
