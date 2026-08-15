#include <stdio.h>
#include <string.h>


void find_highest_and_lowest_frequency(char str[]) {
    int freq[256] = {0};
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }
    int max_freq = 0, min_freq = 1000;
    char max_char, min_char;


    for (i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = (char)i;
        }
        if (freq[i] > 0 && freq[i] < min_freq) {
            min_freq = freq[i];
            min_char = (char)i;
        }
    }

    printf("Highest frequency character: '%c' with frequency %d\n", max_char, max_freq);
    printf("Lowest frequency character: '%c' with frequency %d\n", min_char, min_freq);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    find_highest_and_lowest_frequency(str);

    return 0;
}
