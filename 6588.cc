/* 6588 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

#define MAX 1000001

using namespace std;

/* true is prime */
bool arr[MAX];
vector<int> primes;

bool goldbach(int n) {
  for (int i = 0; i < primes.size(); i++) {
    for (int j = 0; j < primes.size(); j++) {
      if (primes[i] + primes[j] == n) {
        printf("%d = %d + %d\n", n, primes[i], primes[j]);
        return true;
      }
    }
  }
  return false;
}

int main() {
  memset((void *) arr, true, MAX);
  arr[0] = arr[1] = false;

  for (int i = 3; i < MAX; i++) {
    if (arr[i] == true) {
      primes.push_back(i);

      for (int j = 2 * i; j < MAX; j += i) {
        arr[j] = false;
      }
    }
  }

  vector<int> v;

  while (true) {
    int n; scanf("%d", &n);
    if (!n) {
      break;
    }
    v.push_back(n);
  }

  for (int i = 0; i < v.size(); i++) {
    if (!goldbach(v[i])) {
      puts("Goldbach's conjecture is wrong.");
    }
  }
  return 0;
}
/*
8
20
42
0

8 = 3 + 5
20 = 3 + 17
42 = 5 + 37
*/