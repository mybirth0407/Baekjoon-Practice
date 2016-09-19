/* 11022 */

#include <iostream>

using namespace std;

int main() {
  int N; cin >> N;

  for (int n = 1; n < N + 1; n++) {
    int a, b; cin >> a >> b;
    cout << "Case #" << n << ": " << a << " + " << b << " = " << a + b << endl;
  }

  return 0;
}
