#include <stdio.h>
#include <string.h>


void find_first_and_last_occurrence(char str[], char ch) {
    int first_occurrence = -1;
    int last_occurrence = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            if (first_occurrence == -1) {
                first_occurrence = i;
            }
            last_occurrence = i;
        }
    }

    if (first_occurrence != -1) {
        printf("First occurrence of '%c' is at index %d\n", ch, first_occurrence);
        printf("Last occurrence of '%c' is at index %d\n", ch, last_occurrence);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the character to search for: ");
    scanf("%c", &ch);
    find_first_and_last_occurrence(str, ch);

    return 0;
}
