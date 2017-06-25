/* 1678 */

#include <iostream>

using namespace std;
int main() {
  int N; cin >> N;
  int cnt = 0;

  for (int i = N; i > 0; --i) {
    int k = i;
    while (true) {
      if (k % 5 == 0) {
        cnt++;
        k /= 5;
      }
      else {
        break;
      }
    }
  }
  cout << cnt << endl;

  return 0;
}

/*
10

2
*/
