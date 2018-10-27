#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(int argc, char **argv) {
	unordered_multimap<int, int> uom = {
		{
			2, 1
		},
		{
			2, 4
		},
		{
			2, 1
		}
	};

	cout << uom.bucket_count() << endl;
	cout << uom.max_bucket_count() << endl;
	cout << uom.bucket_size(1) << endl;
	cout << uom.bucket_size(2) << endl;
	cout << uom.bucket_size(3) << endl;
	cout << uom.bucket_size(4) << endl;
	cout << uom.bucket_size(5) << endl;

	return 0;
}
