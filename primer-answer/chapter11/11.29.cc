#include <iostream>
#include <utility>
#include <vector>
#include <map>

using namespace std;

int main(int argc, char **argv) {
	multimap<int, int> mm = {
		{1, 2},
		{2, 3},
		{2, 4},
		{2, 5},
		{2, 6}
	};

	for (auto beg = mm.lower_bound(2), end = mm.upper_bound(2); beg != end; ++beg) {
		cout << beg->second << endl;
	}
	
	for (auto p = mm.equal_range(2); p.first != p.second; p.first++) {
		cout << p.first->second << endl;
	}
	return 0;
}
