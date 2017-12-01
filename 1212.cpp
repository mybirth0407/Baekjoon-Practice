#include <iostream>
#include <vector>

using namespace std;

string arr[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};

int main() {
  string s;
  cin >> s;
  long result = 0;
  int k = 0;
  vector<string> v;
  int c = s[0] - '0';
  v.push_back(arr[c]);

  if (c == 1) {
    v[0].erase(v[0].begin());
    v[0].erase(v[0].begin());
  }
  else if (c == 2) {
    v[0].erase(v[0].begin());
  }
  else if (c == 3) {
    v[0].erase(v[0].begin());
  }

  for (int i = 1; i < s.length(); i++) {
    v.push_back(arr[s[i] - '0']);
  }

  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
  }
  return 0;
}

/*
314

11001100
*/
