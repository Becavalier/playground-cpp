#include <iostream>
#include <utility>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	vector<pair<string, int>> v;
	v.push_back({
		"YHSPY", 1
	});

	pair<string, int> x = make_pair("YHSPY", 2);
	v.push_back(x);

	pair<string, int> y = pair<string, int>("YHSPY", 3);
	v.push_back(y);

	for (const auto &e : v) {
		cout << e.first << " " << e.second << endl;
	}
	
	return 0;
}
