#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main(int argc, char **argv) {
	map<string, list<int>> m = {
		{
			"YHSPY", {
				1, 2, 3, 4
			}
		}
	};

	for (const auto &e : m) {
		cout << e.first << endl;
		for (const auto &line :
		 e.second) {
			cout << line << ", ";
		}
	}
	return 0;
}
