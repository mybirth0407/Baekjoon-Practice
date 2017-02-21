/* 1978 */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

bool is_prime(int x) {
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int N; scanf("%d", &N);
  int *in = new int[N];
  int count_of_prime = 0;

  for (int i = 0 ; i < N; i++) {
    scanf("%d", &in[i]);
    if (is_prime(in[i]) && in[i] != 1) {
      count_of_prime++;
    }
  }
  printf("%d\n", count_of_prime);
  return 0;
}
/*
4
1 3 5 7

3
*/