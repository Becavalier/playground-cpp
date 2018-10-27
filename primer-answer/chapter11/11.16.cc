#include <iostream>
#include <utility>
#include <vector>
#include <map>

using namespace std;

int main(int argc, char **argv) {
	map<int, int> m{
		{1, 2},
		{2, 3}
	};

	auto ite = begin(m);
	ite->second = 10;

	for (const auto &e : m) {
		cout << e.first << ": " << e.second << endl;
	}
	
	return 0;
}
