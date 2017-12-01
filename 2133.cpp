/* 2133 */

#include <stdio.h>

int main () {

  int tile[32] = {0};
  int i = 0, j = 0;

  scanf ("%d", &j);

  for (i = 1; i<31; i += 2) {

    tile[i] = 0;
  }

  tile[2] = 3;
  tile[4] = 11;

  for (i = 6; i<32; i += 2) {

    tile[i] = 4 * tile[i - 2] - tile[i - 4];
  }

  printf ("%d", tile[j]);

  return 0;
}