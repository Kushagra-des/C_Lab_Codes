#include <stdio.h>
#include <string.h>


void remove_duplicates(char str[]) {
    int length = strlen(str);
    int index = 0;
    for (int i = 0; i < length; i++) {
        int j;
        for (j = 0; j < index; j++) {
            if (str[i] == str[j]) {
                break;
            }
        }
        if (j == index) {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    remove_duplicates(str);
    printf("String after removing duplicates: %s\n", str);

    return 0;
}
