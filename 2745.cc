/* 2745 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  string s;
  int n;
  cin >> s; cin >> n;
  long result = 0;

  for (int i = 0; i < s.length(); i++) {
    int c = (char) s[s.length() - i - 1];

    if ('0' <= c && c <= '9') {
      result = result + (long) (pow(n, i) * (c - '0'));
    }
    else if ('A' <= c && c <= 'Z') {
      result = result + (long) (pow(n, i) * (c - 'A' + 10));
    }
  }

  cout << result << endl;;
  return 0;
}

/*
ZZZZZ 36

60466175
*/
