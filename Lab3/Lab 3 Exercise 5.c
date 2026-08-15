#include <stdio.h>
int main()
{
int age;
   printf("Enter your age: ");
    scanf("%d", &age);
    printf("Eligibility Status:\n");
    if (age >= 18) {
        printf("Eligible to cast the vote.\n");
        if (age >= 21) {
            printf("Eligible to get married.\n");
            if (age >= 25) {
                printf("Eligible to contest election.\n");
                if (age >= 35) {
                    printf("Eligible to be President of India.\n");
                } else {
                    printf("Not eligible to be President of India.\n");
                }
            } else {
                printf("Not eligible to contest election.\n");
                printf("Not eligible to be President of India.\n");
            }
        } else {
            printf("Not eligible to get married.\n");
            printf("Not eligible to contest election.\n");
            printf("Not eligible to be President of India.\n");
        }
    } else {
        printf("Not eligible to cast the vote.\n");
        printf("Not eligible to get married.\n");
        printf("Not eligible to contest election.\n");
        printf("Not eligible to be President of India.\n");
    }
    return 0;
}
