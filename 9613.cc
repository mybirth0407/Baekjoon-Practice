/* 9613 */

#include <cstdio>

using namespace std;

int get_gcd(int x, int y);

int main() {
  int test_case; scanf("%d", &test_case);
  for (int t = 0; t < test_case; t++) {
    int n; scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        sum += get_gcd(arr[i], arr[j]);
      }
    }

    printf("%d\n", sum);
  }
  return 0;
}

int get_gcd(int x, int y) {
  while (1) {
    if (y == 0) {
      break;
    }
    int z =  x % y;
    x = y;
    y = z;
  }
  return x;
}

/*
3
4 10 20 30 40
3 7 5 12
3 125 15 25
*/