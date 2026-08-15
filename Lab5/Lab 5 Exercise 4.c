#include <stdio.h>
int main() {
    int number, digit, temp;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0) {
        number = -number;
    }
    temp = number;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    printf("Total count of digits: %d\n", count);
    printf("Frequency of each digit:\n");
    for (int i = 0; i <= 9; i++) {
        int frequency = 0;
        temp = number;
        while (temp > 0) {
            digit = temp % 10;
            if (digit == i) {
                frequency++;
            }
            temp /= 10;
        }
        if (frequency > 0) {
            printf("Digit %d: %d times\n", i, frequency);
        }
    }
    return 0;
}
