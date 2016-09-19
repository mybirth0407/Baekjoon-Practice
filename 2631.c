/* 2631 */

#include <stdio.h>

int arr[201];
int lis[201];

int main() {
    int n;
    int i, j;
    int max = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        lis[i] = 1;

        for (j = 0; j < i; j++) {
            if (arr[j] < arr[i]) {
                if (lis[j] + 1 > lis[i]) {
                    lis[i] = lis[j] + 1;
                }
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (lis[i] > max) {
            max = lis[i];
        }
    }

    printf("%d\n", n - max);
}
