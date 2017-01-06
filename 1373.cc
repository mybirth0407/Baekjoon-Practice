#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
  string s;
  cin >> s;
  long result = 0;
  int k = 0;
  vector<int> v;

  for (int i = 0; i < s.length(); i++) {
    if (k == 3) {
      v.push_back(result);
      result = 0;
      k = 0;
    }

    if (s[s.length() - i - 1] == '0') {
      result += (long) (0 * pow(2, k));
    }
    else if (s[s.length() - i - 1] == '1') {
      result += (long) (1 * pow(2, k));
    }
    k++;
  }
  v.push_back(result);
  for (int i = 0; i < v.size(); i++) {
    cout << v[v.size() - i -1];
  }
  return 0;
}

/*
11001100

314
*/