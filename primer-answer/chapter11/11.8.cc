#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char **argv) {
	vector<string> v{"YHSPY", "Apple"};
	string s;
	while(cin >> s) {
		if (s != "exit") {
			if (find(begin(v), end(v), s) == v.end()) {
				v.push_back(s);
			}
		} else {
			break;
		}
	}
	for (const auto e : v) {
		cout << e << endl;
	}
	return 0;
}
