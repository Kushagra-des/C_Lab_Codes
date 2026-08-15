#include <stdio.h>

void concatenateStrings(char *str1, char *str2, char *result) {
    while (*str1 != '\0') {
        *result = *str1;
        str1++;
        result++;
    }

    while (*str2 != '\0') {
        *result = *str2;
        str2++;
        result++;
    }
    *result = '\0';
}

int main() {
    char str1[100], str2[100], result[200];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    concatenateStrings(str1, str2, result);
    printf("Concatenated string: %s\n", result);

    return 0; }
