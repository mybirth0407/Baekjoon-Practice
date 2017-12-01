/* 1912 */

#include <stdio.h>
#include <stdlib.h>

int main () {

  int *np;
  int n;
  int i;

  int sum;
  int max;
  int temp;

  scanf ("%d", &n);

  np = (int *)malloc (sizeof (int) * n);

  for (i = 0; i < n; i++) {

    scanf ("%d", &np[i]);
  }

  sum = 0;
  max = 0;

  for (i = 0; i < n; i++) {

    sum += np[i];

    if (sum > max) {

      max = sum;
    }

    if (sum < 0) {

      sum = 0;
    }
  }

  printf ("%d\n", max);

  return 0;
}