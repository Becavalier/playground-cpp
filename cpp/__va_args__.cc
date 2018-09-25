#include <iostream>
#define DEBUG(...) \
  printf("%s", "<::>" #__VA_ARGS__)

using namespace std;

int main (int argc, char **argv) {
  DEBUG({
    let x = 1;
    console.log(x + 10);
  });
}
