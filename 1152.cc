/* 1152 */

#include <stdio.h>

int main () {

  char input[1000001] = "\0";
  int i = 0, j = 0;
  int size = 0;

  gets (input);

  if (input[0] == 32) {

    for (i = 0; i<sizeof (input); i++) { //시작점 찾기

      if (input[i] == 32) {

        j++;
      }

      if (input[i] != 32) {

        break;
      }
    }

    j--;

    for (i = j; i<sizeof (input); i++) {

      if (input[i] == 32) {

        size++;
      }

      if (input[i] == 0) {

        break;
      }
    }

    if (i >= 1) {

      if (input[i - 1] == 32) {

        size--;
      }
    }

    printf ("%d", size);

  }

  else {

    for (i = j; i<sizeof (input); i++) {

      if (input[i] == 32) {

        size++;
      }

      if (input[i] == 0) {

        break;
      }
    }

    if (i >= 1) {

      if (input[i - 1] == 32) {

        size--;
      }
    }

    printf ("%d", size + 1);
  }

  return 0;
}