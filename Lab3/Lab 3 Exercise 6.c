#include <stdio.h>
#include <string.h>
int main() {
    char gender[10], qualification[20];
    int years_of_service, salary = 0;
    printf("Enter gender (Male/Female): ");
    scanf("%s", gender);
    printf("Enter years of service: ");
    scanf("%d", &years_of_service);
    printf("Enter qualification (Graduate/Post-Graduate): ");
    scanf("%s", qualification);
        if (strcmp(gender, "Male") == 0) {
        if (years_of_service >= 10) {
            if (strcmp(qualification, "Post-Graduate") == 0) {
                salary = 15000;
            } else if (strcmp(qualification, "Graduate") == 0) {
                salary = 10000;
            }
        } else {
            if (strcmp(qualification, "Post-Graduate") == 0) {
                salary = 10000;
            } else if (strcmp(qualification, "Graduate") == 0) {
                salary = 7000;
            }
        }
    } else if (strcmp(gender, "Female") == 0) {
        if (years_of_service >= 10) {
            if (strcmp(qualification, "Post-Graduate") == 0) {
                salary = 12000;
            } else if (strcmp(qualification, "Graduate") == 0) {
                salary = 9000;
            }
        } else {
            if (strcmp(qualification, "Post-Graduate") == 0) {
                salary = 10000;
            } else if (strcmp(qualification, "Graduate") == 0) {
                salary = 6000;
            }
        }
    }
    printf("The salary of the employee is: %d\n", salary);
    return 0;
}
