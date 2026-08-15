#include <stdio.h>
#include <string.h>
void swapStrings(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp; }

int main() {
    char str1[100], str2[100];
    char *ptr1 = str1, *ptr2 = str2;

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Before swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    swapStrings(&ptr1, &ptr2);

    printf("After swapping:\n");
    printf("String 1: %s\n", ptr1);
    printf("String 2: %s\n", ptr2);

    return 0;
}
