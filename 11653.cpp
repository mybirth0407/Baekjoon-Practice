/* 11653 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

int main() {
  int N; scanf("%d", &N);

  for (int i = 2; i * i <= N; i++) {
    while (true) {
      if (N % i != 0) {
        break;
      }
      printf("%d\n", i);
      N /= i;
    }
  }

  if (N > 1) {
    printf("%d\n", N);
  }
  return 0;
}
/*
72

2
2
2
3
3

3

3

6

2
3
*/