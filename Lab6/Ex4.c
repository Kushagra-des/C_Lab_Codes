#include <stdio.h>
int main() {
    int size = 7;
    int mid = size / 2;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                if (j == mid) {
                    printf("+");
                } else {
                    printf("*");
                }
            } else if (j == mid) {
                printf("+");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

