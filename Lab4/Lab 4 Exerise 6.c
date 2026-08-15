#include <stdio.h>

int main() {
    int school, dept;

    printf("1. School of Computer Science\n2. School of Engineering\n3. School of Business\n");
    printf("Choose a school (1-3): ");
    scanf("%d", &school);

    switch(school) {
        case 1:
            printf("1. Informatics\n2. Machine Learning\n");
            break;
        case 2:
            printf("1. Electronics Engineering\n2. Mechanical Engineering\n");
            break;
        case 3:
            printf("1. Commerce\n2. Purchasing\n");
            break;
        default:
            printf("Invalid school\n");
            return 0;
    }

    printf("Choose a department (1-2): ");
    scanf("%d", &dept);

    switch(school) {
        case 1:
            printf(dept == 1 ? "Informatics\n" : "Machine Learning\n");
            break;
        case 2:
            printf(dept == 1 ? "Electronics Engineering\n" : "Mechanical Engineering\n");
            break;
        case 3:
            printf(dept == 1 ? "Commerce\n" : "Purchasing\n");
            break;
        default:
            printf("Invalid department\n");
    }

    return 0;
}
