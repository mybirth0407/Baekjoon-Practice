/* 1934 */

#include <cstdio>

using namespace std;

int get_gcd(int x, int y);

int main() {
  int T;
  scanf("%d", &T);
  for (int t = 0; t < T; t++) {
    int N, M;
    scanf("%d %d", &N, &M);
    int gcd = get_gcd(N, M);
    int lcm = (N * M) / gcd;

    printf("%d\n", lcm);
  }
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
3
1 45000
6 10
13 17
*/
