/* 11650 */

#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  vector<pair<int, int> > v(N);

  for (int i = 0; i < N; i++) {
    // cin >> v[i].first >> v[i].second;
    scanf("%d %d", &v[i].first, &v[i].second);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < N; i++) {
    // cout << v[i].first << " " << v[i].second << endl;
    printf("%d %d\n", v[i].first, v[i].second);
  }

  return 0;
}

/*
5
3 4
1 1
1 -1
2 2
3 3
*/