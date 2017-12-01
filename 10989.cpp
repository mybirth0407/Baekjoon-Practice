/* 10989 */

#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  int arr[10001] = {0, };

  for (int i = 0; i < N; i++) {
    int input;
    scanf("%d", &input);
    arr[input]++;
  }
  for (int i = 1; i < 10001; i++) {
    for (int j = 0; j < arr[i]; j++) {
      printf("%d\n", i);
    }
  }

  return 0;
}

/*
10
5
2
3
1
4
2
3
5
1
7
*/