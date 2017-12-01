/* 10872 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

int main() {
  int N; scanf("%d", &N);
  long long ret = 1;
  for (int i = 2; i <= N; i++) {
    ret *= i;
  }
  printf("%lld\n", ret);
  return 0;
}
/*
10

3628800
*/