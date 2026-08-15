#include <stdio.h>

int main() {
    int decimal, base;
    char result[32];
    int index = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Enter the target base (2-16): ");
    scanf("%d", &base);

    if (base < 2 || base > 16) {
        printf("Invalid base! Base should be between 2 and 16.\n");
        return 1;
    }
    while (decimal > 0) {
        int remainder = decimal % base;
        if (remainder < 10) {
            result[index] = '0' + remainder;
        } else {
            result[index] = 'A' + (remainder - 10);
        }
        decimal /= base;
        index++;
    }

    printf("Converted number: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");
    return 0;
}
