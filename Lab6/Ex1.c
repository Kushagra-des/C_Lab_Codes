#include <stdio.h>
int main() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("*");
        }
        printf("+");
        for (j = 0; j < 3; j++) {
            printf("*");
        }
        printf("\n"); }
    for (i = 0; i < 7; i++) {
        printf("+"); }
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("*");
        }
        printf("+");
        for (j = 0; j < 3; j++) {
            printf("*");
        }
        printf("\n");
    }
return 0;
}
