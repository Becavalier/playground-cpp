#include <iostream>
#include <vector>
#include <map>
#include <string>

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

	auto x = mm.find("A");
	if (x != end(mm)) {
		mm.erase(x);
	}

	for (const auto &e : mm) {
		cout << e.first << ": " << e.second << endl;
	}

	return 0;
}
