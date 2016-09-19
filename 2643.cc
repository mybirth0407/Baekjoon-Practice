/* 2643 */

#include <stdio.h>
#include <stdlib.h>

typedef struct _colorPaper {

  int x;
  int y;
  int cnt;
} colorPaper;


int cmp (const void *a, const void *b) {

  colorPaper cmp1 = *(colorPaper *)a;
  colorPaper cmp2 = *(colorPaper *)b;

  // ?
  return cmp1.x == cmp2.x ? cmp2.y - cmp1.y : cmp2.x - cmp1.x;
}


int main () {

  colorPaper *paper;
  int n;
  int i, j;
  int x, y;
  int tmp;
  int max;
  int m;

  scanf ("%d", &n);

  paper = (colorPaper *)malloc (sizeof (colorPaper) * n);
  m = 0;

  for (i = 0; i < n; i++) {
    //�Է� �ް�
    scanf ("%d %d", &x, &y);
    //���ΰ� ���κ��� ��ٸ� 90�� ȸ��
    if (y > x) {

      tmp = x;
      x = y;
      y = tmp;
    }
    //���� ���� �Է��� �̹� �ִ��� Ȯ��
    for (j = 0; j < i; j++) {
      //���� ���� �Է��� �̹� �ִٸ�
      if (x == paper[j].x && y == paper[j].y) {

        m++; //���� ���� �Է��� ó������ ������, �������� ���Ѵ�.
        break;
      }
    }
    //���� ���� �Է��� ���ٸ� �߰�
    if (j == i) {

      paper[i].x = x;
      paper[i].y = y;
      paper[i].cnt = 1;
    } else { //���� ���� �Է��� ���ٸ�, �̹� �Է��� ��ȿȭ

      n--;
      i--;
    }
  }

  //printf ("���� ��\n");
  //for (i = 0; i < n; i++) {

  //  printf ("%d %d\n", paper[i].x, paper[i].y);
  //}

  qsort (paper, n, sizeof (colorPaper), cmp);

  //printf ("���� ��\n");  
  //for (i = 0; i < n; i++) {

  //  printf ("%d %d\n", paper[i].x, paper[i].y);
  //}

  max = 0;

  // Algorithm
  for (i = 0; i < n; i++) {

    for (j = 0; j < i; j++) {

      if (paper[i].x == paper[j].x || paper[j].y >= paper[i].y) {

        if (paper[i].cnt < paper[j].cnt + 1) {

          paper[i].cnt = paper[j].cnt + 1;
        }
      }
    }

    if (max < paper[i].cnt) {

      max = paper[i].cnt;
    }
  }

  printf ("%d", max + m);

  return 0;
}