#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
      if (ch >= 'A' && ch <= 'Z') {
        printf("The character is a Capital Letter.\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character is a Small Letter.\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("The character is a Digit.\n");
    }
    else {
        printf("The character is a Special Character.\n");
    }
    return 0;
}
