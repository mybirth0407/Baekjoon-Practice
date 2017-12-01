/* 2004 */

#include <iostream>

using namespace std;
int main() {
  int n, m; cin >> n >> m;
  int input[3] = {n, m, n - m};
  // 0: 분모, 1: 분자1, 2: 분자2
  int cnt_five[3] = {0};
  int cnt_two[3] = {0};
  

  for (int i = 0; i < 3; ++i) {
    for (long long j = 5; input[i] / j > 0; j *= 5) {
      cnt_five[i] += input[i] / j;
    }

    for (long long j = 2; input[i] / j > 0; j *= 2) {
      cnt_two[i] += input[i] / j;
    }
  }

  int five = cnt_five[0] - cnt_five[1] - cnt_five[2];
  int two = cnt_two[0] - cnt_two[1] - cnt_two[2];

  int cnt =  five < two ? five : two;
  cout << cnt << endl;

  return 0;
}

/*
25 12

2
*/
