/* 11576 */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

int main() {
  int A, B; scanf("%d %d", &A, &B);
  int m; scanf("%d", &m);
  int *in = new int[m];
  for (int i = 0; i < m; i++) {
    scanf("%d", &in[i]);
  }

  vector<int> v;
  int dec = 0;
  for (int i = 0; i < m; i++) {
    dec += (in[m - i - 1] * pow(A, i));
  }

  int q = dec, r = -1;
  while (true) {
    if (q == 0) {
      break;
    }

    r = q % B;
    q /= B;
    v.push_back(r);
  }

  for (int i = 0; i < v.size(); i++) {
    printf("%d ", v[v.size() - i - 1]);
  }
  return 0;
}
/*
17 8
2
2 16

6 2
*/