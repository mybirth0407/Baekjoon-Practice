/* 1924 */

#include <iostream>

using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  char days[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
  int arr[12] = {1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};

  int z;
  if (y == 7) {
    z = 6;
  }
  else {
    z = (y % 7) - 1;
  }

  int k = arr[x - 1];
  int result = (k + z) % 7;

  cout << days[result] << endl;
  return 0;
}

/*
input
1 1
*/

/*
output
MON
*/
