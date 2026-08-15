#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    switch(c)
    {
        case 'a' ... 'z':
        printf("The Entered character is lower case");
        break;

        case 'A' ... 'Z':
        printf("The Entered Character is upper case");
        break;

        case '0' ... '9':
        printf("The Entered value is a Digit");
        break;

        default:
        printf("The entered Character is a special character");
    }
    return 0;
}
