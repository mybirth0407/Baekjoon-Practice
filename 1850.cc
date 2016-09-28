/* 1850 */

#include <cstdio>

using namespace std;

unsigned long long get_gcd(unsigned long long x, unsigned long long y);

int main() {
  unsigned long long N, M;
  scanf("%lld %lld", &N, &M);
  unsigned long long gcd = get_gcd(N, M);
  
  for (unsigned long long i = 0; i < gcd; i++) {
    printf("%c", '1');
  }
  return 0;
}

unsigned long long get_gcd(unsigned long long x, unsigned long long y) {
  while (1) {
    if (y == 0) {
      break;
    }
    unsigned long long z =  x % y;
    x = y;
    y = z;
  }
  return x;
}

/*
3 4
*/
/*
3 6
*/