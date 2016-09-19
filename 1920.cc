/* 1920 */

#include <stdio.h>
#include <stdlib.h>

void QuickSort (int *p, int left, int right) {

  int i = left;
  int j = right;
  int pivot = p[left];
  int temp;

  if (left < right) {

    do {

      if ((p[j] >= pivot) && (i < j)) {

        j--;
      }

      else if ((p[i] <= pivot) && (i < j)) {

        i++;
      }

      else {

        temp = p[i];
        p[i] = p[j];
        p[j] = temp;
      }
    } while (i < j);


    temp = p[j];
    p[i] = p[left];
    p[left] = temp;

    QuickSort (p, left, j - 1);
    QuickSort (p, j + 1, right);
  }
}


int BinarySearch (int *p, int left, int right, int target) {

  int mid;

  while (left <= right) {

    mid = ((left + right) / 2);

    if (p[mid] == target) {

      return 1;
    }


    else {

      if (p[mid] > target) {

        right = mid - 1;
      }

      else {

        left = mid + 1;
      }

    }
  }

  return 0;
}


int main () {

  int n;
  int m;
  int *np;
  int *mp;

  int i;
  int j;

  int flags;
  int mid;

  scanf ("%d", &n);
  //n = 5;
  if (n < 0) {

    return 0;
  }

  np = (int *)malloc (sizeof (int) * n);

  for (i = 0; i < n; i++) {

    scanf ("%d", &np[i]);
  }
  //np[0] = 4, np[1] = 1, np[2] = 5, np[3] = 2, np[4] = 3;
  scanf ("%d", &m);
  //m = 5;
  if (m < 0) {

    return 0;
  }

  mp = (int *)malloc (sizeof (int) * m);

  for (i = 0; i < m; i++) {

    scanf ("%d", &mp[i]);
  }
  //mp[0] = 1, mp[1] = 3, mp[2] = 7, mp[3] = 9, mp[4] = 5;

  QuickSort (np, 0, n - 1);

  for (i = 0; i < m; i++) {

    if (BinarySearch (np, 0, n - 1, mp[i]) == 1) {

      printf ("1\n");
    }

    else {

      printf ("0\n");
    }
  }

  return 0;
}