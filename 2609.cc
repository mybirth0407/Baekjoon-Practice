/* 2609 */

#include <cstdio>

using namespace std;

int get_gcd(int x, int y);

int main() {
  int N, M;
  scanf("%d %d", &N, &M);
  int gcd = get_gcd(N, M);
  int lcm = (N * M) / gcd;

  printf("%d\n%d\n", gcd, lcm);
  return 0;

}

int get_gcd(int x, int y) {
  while (1) {
    if (y == 0) {
      break;
    }
    int z = x % y;
    x = y;
    y = z;
  }
  return x;
}

/*
24 18
*/
