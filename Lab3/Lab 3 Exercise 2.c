#include<stdio.h>
int main()
{
int x;
    printf("Enter the Year:");
    scanf("%d", &x);
    if (x%400==0)
        printf("IT IS A LEAP YEAR!!");
    else if ((x%4==0)&&(x%100!=0))
        printf("IT IS A LEAP YEAR!!");
    else printf("it is not a leap year");
    return 0;
}
