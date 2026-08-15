#include <stdio.h>
void separateVowelsAndConsonants(char inputStr[], char Vowels[], char Consonants[], int *vowelCount, int *consonantCount) {
    int i, v = 0, c = 0;
    for (i = 0; inputStr[i] != '\0'; i++) {
        char ch = inputStr[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                Vowels[v++] = ch;
            } else {
                Consonants[c++] = ch;
            }
        }
    }
    
    *vowelCount = v;
    *consonantCount = c;
}
int main() {
    char inputStr[100], Vowels[100], Consonants[100];
    int vowelCount = 0, consonantCount = 0;
    printf("Enter a string: ");
    fgets(inputStr, sizeof(inputStr), stdin);
    separateVowelsAndConsonants(inputStr, Vowels, Consonants, &vowelCount, &consonantCount);
    printf("Vowels (%d): ", vowelCount);
    for (int i = 0; i < vowelCount; i++) {
        printf("%c ", Vowels[i]);
    }
    printf("\n");
    printf("Consonants (%d): ", consonantCount);
    for (int i = 0; i < consonantCount; i++) {
        printf("%c ", Consonants[i]);
    }
    printf("\n");
    return 0;}