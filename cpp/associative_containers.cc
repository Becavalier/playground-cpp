#include <iostream>
#include <set>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main(int argc, char **argv) {

	map<string, size_t> word_count;
	string word;

	set<string> exclude = {
		"The", "But"
	};

	while(cin >> word) {
		if (word == "exit")
			break;
		else if (exclude.find(word) == exclude.end())
			++word_count[word];
	}
	for (const auto &w : word_count) {
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
	}

	

	return 0;
}