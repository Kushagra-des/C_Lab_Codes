#include <stdio.h>
int main() {
    int n = 4;
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (j = i; j <= 2 * i - 1; j++) {
            printf("%d", j);
        }
        for (j = 2 * i - 2; j >= i; j--) {
            printf("%d", j);
        }
printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (j = i; j <= 2 * i - 1; j++) {
            printf("%d", j);
        }
        for (j = 2 * i - 2; j >= i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

