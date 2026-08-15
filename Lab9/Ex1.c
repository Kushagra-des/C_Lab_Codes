#include <stdio.h>
#include <string.h>

void sort_string(char str[]) {
    int length = strlen(str);
    char temp;

    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp; AC} } } }

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    sort_string(str);
    printf("String in ascending order: %s\n", str);

    return 0;
}
