#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main (int argc, char **argv) {
    fstream in("./10.29.cc");

    istream_iterator<string> iter(in);
	istream_iterator<string> eof;

	vector<string> vec(iter, eof);

	for (const auto &w : vec)
		cout << w << " ";
	cout << endl;

    return 0;
}