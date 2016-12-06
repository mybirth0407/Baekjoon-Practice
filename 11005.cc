/* 11005 */

#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<char> v;
  char arr[36];
  for (int i = 0; i < 10; i++) {
    arr[i] = 48 + i;
  }
  for (int i = 10; i < 36; i++) {
    arr[i] = 55 + i;
  }

  unsigned long long N;
  unsigned B;
  scanf("%lld %d", &N, &B);

  while (1) {
    unsigned long long m = N;
    unsigned long long r;
    if (N < B) {
      // printf("%c\n", arr[N]);
      v.push_back(arr[N]);
      break;
    }
    else {
      r = N % B; // 나머지
    }
    N /= B; // 몫

    // printf("%c\n", arr[r]);
    v.push_back(arr[r]);
  }

  for (int i = v.size() - 1; i > -1; i--) {
    printf("%c", v[i]);
  }
  puts("");
  return 0;
}

/*
60466175 36
*/
