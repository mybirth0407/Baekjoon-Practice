/* 11004 */

#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
  int N, K;
  long arr[5000000];
  scanf("%d %d", &N, &K);
  K--;
  for (int i = 0; i < N; i++) {
    scanf("%ld", &arr[i]);
  }
  nth_element(arr, arr + K, arr + N);
  printf("%ld\n", arr[K]);

  return 0;
}

/*
5 2
4 1 2 3 5
*/
