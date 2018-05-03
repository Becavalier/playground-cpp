#include <iostream>
#include <cstdio>

#define SIZE 10

using namespace std;

using arrT = int[SIZE];

arrT* funcA (int i, int (*p)[SIZE]);

// Trailing-Return-Type;
// auto funcA (int i, int (*p)[SIZE]) -> int(*)[10];


int main (int argc, char **argv) {
  int arrS[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int (*p)[SIZE] = funcA(2, &arrS);

  for (auto e : *p) {
    printf("%d\n", e);
  }
  return 0;
}

arrT* funcA (int i, int (*p)[SIZE]) {
  *(*(p) + i) = 0;
  return p;
}
