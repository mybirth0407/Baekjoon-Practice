/* 2089 */

#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

const int K = -2;

int main() {
  vector<int> v;
  int N; scanf("%d", &N);

  if (N == 0) {
    puts("0");
    return 0;
  }
  else if (N == 1) {
    puts("1");
    return 0;
  }

  int q = N;
  int r = K;

  while (true) {
    r = abs(q % K);
    q = ceil((double) q / (double) K);

    if (q == 1) {
      v.push_back(r);
      v.push_back(q);
      break;
    }

    if (r == 1) {
      v.push_back(1);
    }
    else if (r == 0) {
      v.push_back(0);
    }
  }

  for (int i = 0; i < v.size(); i++) {
    printf("%d", v[v.size() - i - 1]);
  }

  return 0;
}