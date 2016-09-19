#include <stdio.h>

int main () {

  int arr1[50] = {0};
  int arr2[50] = {0};
  int arr3[50] = {0};
  int i = 0;
  int j = 0;
  int n = 0;
  int sum = 0;
  int temp = 0;

  scanf ("%d", &n);

  for (i = 0; i<n; i++) {

    scanf ("%d", &arr1[i]);
  }

  for (i = 0; i<n; i++) {

    scanf ("%d", &arr2[i]);
  }

  for (i = 0; i<n; i++) {

    for (j = 0; j<n - i - 1; j++) {

      if (arr1[j]>arr1[j + 1]) {

        temp = arr1[j];
        arr1[j] = arr1[j + 1];
        arr1[j + 1] = temp;
      }
    }
  }

  for (i = 0; i<n; i++) {

    for (j = 0; j<n - i - 1; j++) {

      if (arr2[j]<arr2[j + 1]) {

        temp = arr2[j];
        arr2[j] = arr2[j + 1];
        arr2[j + 1] = temp;
      }
    }
  }

  for (i = 0; i<n; i++) {

    sum += (arr1[i])*(arr2[i]);
  }

  printf ("%d", sum);

  return 0;
}