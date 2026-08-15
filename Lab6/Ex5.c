#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", 'a' + i - 1);
        }
        for (int k = rows - i; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}

