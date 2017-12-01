/* 2579 */

#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

#define FOR(i, n) for (i = 0; i < n; i++)

using namespace std;

int main () {

  int n;
  int i;

  cin >> n;

  int dv[3][300];

  //vector <vector <int>> dv;

  //FOR (i, 3) {

  //  vector <int> temp;
  //  temp.resize (n);
  //  dv.push_back (temp);
  //}

  FOR (i, n) {

    cin >> dv[0][i];
  }

  dv[1][0] = dv[2][0] = dv[0][0];
  dv[1][1] = dv[2][0] + dv[0][1];
  dv[2][1] = dv[0][1];

  for (i = 2; i < n; i++) {

    dv[1][i] = dv[2][i - 1] + dv[0][i];
    dv[2][i] = max (dv[1][i - 2], dv[2][i - 2]) + dv[0][i];
  }

  cout << max (dv[1][n - 1], dv[2][n - 1]) << endl;

  return 0;

}