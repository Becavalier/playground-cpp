#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	istream_iterator<int> in_iter(cin), in_eof;
	ostream_iterator<int> out_iter(cout, " ");
	vector<int> v(in_iter, in_eof);

	sort(v.begin(), v.end());
	copy(v.begin(), v.end(), out_iter);
	cout << endl;	

	return 0;
}