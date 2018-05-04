#include <iostream>
#include <string>

using namespace std;

// "inline constexpr" = "constexpr" [Default inline style]
constexpr bool isShorter(const string &s1, const string &s2) {
  return s1.size() < s2.size();
}
