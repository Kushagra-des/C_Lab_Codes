#include <stdio.h>
int main() {
    int totalRows = 7;
    for (int i = 0; i < totalRows; i++) {
        if (i < 3) {
            printf("***+111\n");
        } else if (i == 3) {
            printf("+++++++\n");
        } else {
            printf("aaa+ZZZ\n");
        }
    }
    return 0;
}
