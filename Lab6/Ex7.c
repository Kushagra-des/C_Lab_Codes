#include <stdio.h>
int main() {
    int i, j;
    for (j = 1; j <= 10; j++) {
        printf("*");
    }
    printf("\n");
    for (j = 1; j <= 3; j++) {
        printf("*");
    }
    for (j = 1; j <= 4; j++) {
        printf(" ");
    }
    for (j = 1; j <= 3; j++) {
        printf("*");
    }
    printf("\n");
    printf("*");
    for (j = 1; j <= 8; j++) {
        printf(" ");
    }
    printf("*\n");
    printf("5        1\n");
    for (i = 1; i <= 3; i++) printf("4");
    printf("    ");
    for (i = 1; i <= 3; i++) printf("2");
    printf("\n");
    for (i = 1; i <= 10; i++) printf("3");
    printf("\n");
    return 0;
}
