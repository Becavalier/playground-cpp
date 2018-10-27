#include <iostream>
#include <utility>
#include <vector>
#include <map>

using namespace std;

int main(int argc, char **argv) {
	map<string, vector<int>> v = {
		{
			"YHSPY", {
				1, 2, 3, 4
			}
		}
	};

	auto r = v.insert({
		"APPLE", {
			2, 3, 4, 5
		}
	});

	(r.first->second).push_back(100);

	for (const auto &e : r.first->second) {
		cout << e << endl;
	}
	
	return 0;
}
