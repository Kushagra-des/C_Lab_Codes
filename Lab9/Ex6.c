#include <stdio.h>
#include <string.h>


void sort_ascending(char names[][50], int n) {
    char temp[50];

    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}
void sort_descending(char names[][50], int n) {
    char temp[50];

    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) < 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

void display_names(char names[][50], int n) {
    printf("\nList of student names:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i+1, names[i]);
    }
}

int main() {
    int n;
    char choice;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    char names[n][50];
    printf("Enter the names of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf(" %[^\n]", names[i]);
    }

    do {

        printf("\nMenu:\n");
        printf("A. Sort names in ascending order\n");
        printf("D. Sort names in descending order\n");
        printf("X. Exit\n");

        printf("Enter your choice (A/D/X): ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'A':
            case 'a':
                sort_ascending(names, n);
                display_names(names, n);
                break;

            case 'D':
            case 'd':
                sort_descending(names, n);
                display_names(names, n);
                break;

            case 'X':
            case 'x':
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 'X' && choice != 'x');

    return 0;
}
