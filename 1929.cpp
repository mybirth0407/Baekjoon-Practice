/* 1929 */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

bool arr[1000001];

void erathosthenes(int x, int N) {
  arr[x] = true;

  for (int i = 2; i * x <= N; i++) {
    arr[i * x] = false; 
  }
}

int main() {
  int M, N; scanf("%d %d", &M, &N);

  for (int i = 0; i <= N; i++) {
    arr[i] = true;
  }

  arr[0] = false;
  arr[1] = false;

  for (int i = 2; i * i <= N; i++) {
    int j;
    for (j = i; j <= N; j++) {
      if (arr[j] == true) {
        break;
      }  
    }
    erathosthenes(j, N);
  }

  for (int i = M; i <= N; i++) {
    if (arr[i] == true) {
      printf("%d\n", i);
    }
  }
  return 0;
}
/*
3 16

3
5
7
11
13
*/