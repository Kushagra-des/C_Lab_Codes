#include <stdio.h>
int main() {
    int dayNumber;
    printf("Enter a number (1-7) to get the corresponding day of the week:\n");
    printf("1. Sunday\n");
    printf("2. Monday\n");
    printf("3. Tuesday\n");
    printf("4. Wednesday\n");
    printf("5. Thursday\n");
    printf("6. Friday\n");
    printf("7. Saturday\n");
    printf("Enter your choice: ");
    scanf("%d", &dayNumber);
    switch(dayNumber) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
