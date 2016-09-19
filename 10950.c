/* 10950 */
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int i;
    for (i = 0; i < N; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}