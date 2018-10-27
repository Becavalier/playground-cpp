#include <iostream>
#include <utility>
#include <vector>
#include <map>

using namespace std;

int main(int argc, char **argv) {
	map<int, vector<int>> v = {
		{
			10, {1, 2, 3, 4}
		}
	};

	using t = map<int, vector<int>>;

	t::mapped_type mappedVector{0, 1, 2};

	t::key_type x = 10;

	t::value_type valuePair = pair<int, vector<int>>(20, {
		9, 4, 5
	});

	t::value_type valuePair2 = make_pair(20, vector<int>{
		9, 4, 5
	});

	cout << x << endl;
	for (auto const &e : mappedVector) {
		cout << e << endl;
	}
	
	return 0;
}
