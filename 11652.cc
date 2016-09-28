/* 11652 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
  int N; cin >> N;
  long long arr[N];
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + N);
  // long long max = distance(v.begin(), max_element(v.begin(), v.end()));

  long long max = arr[0];
  int cnt = 1;
  int temp = 1;

  for (int i = 1; i < N; i++) {
    if (arr[i] == arr[i - 1]) {
      temp++;
    }
    else {
      temp = 1;
    }

    if (cnt < temp) {
      cnt = temp;
      max = arr[i];
    }
  }

  cout << max << '\n';
  return 0;
}

/*
5
1
2
1
2
1
*/