#include <stdio.h>

void decimalToBase(int num, int base) {
    if (num == 0)
        return;
    decimalToBase(num / base, base);
    printf("%d", num % base);
}

int baseToDecimal(int num, int base) {
    if (num == 0)
        return 0;
    return (num % 10) + base * baseToDecimal(num / 10, base);
}

int main() {
    int choice, num, base;

    printf("Menu:\n");
    printf("1. Convert Decimal to Any Base\n");
    printf("2. Convert Any Base to Decimal\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter decimal number: ");
        scanf("%d", &num);
        printf("Enter base to convert to: ");
        scanf("%d", &base);
        printf("Result: ");
        decimalToBase(num, base);
    }
    else if (choice == 2) {
        printf("Enter number in base form: ");
        scanf("%d", &num);
        printf("Enter base of the number: ");
        scanf("%d", &base);
        printf("Result: %d", baseToDecimal(num, base));
    }
    else {
        printf("Invalid choice.");
    }

    return 0;
}
