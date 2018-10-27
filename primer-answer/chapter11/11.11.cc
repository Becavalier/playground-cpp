#include <iostream>
#include <set>

using namespace std;

// using compareFuncType = bool(*)(const int, const int);
using compareFuncType = function<bool(const int, const int)>;

// descending;
bool compareFunc(const int x, const int y) {
	cout << x << " " << y << endl;
	return x > y;
}

int main(int argc, char **argv) {
	multiset<int, compareFuncType> ms(compareFunc);
	ms.insert(10);
	ms.insert(1000);
	ms.insert(1);
	ms.insert(1);

	for (const auto &e : ms) {
		cout << e << " ";
	}
	
	return 0;
}
