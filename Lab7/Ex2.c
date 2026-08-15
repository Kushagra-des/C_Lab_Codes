#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;
    printf("Enter the Base Number: ");
    scanf("%d", &base);
    printf("Enter the Exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);

    printf("%d Raised to the Power of %d is %d\n", base, exponent, result);

    return 0;
}
