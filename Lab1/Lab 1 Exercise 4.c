#include <stdio.h>
int main ()
{
    char name [15],gender;
    int age;
    float height;
    printf("Enter Name:");
    scanf("%s",& name);
    printf("\nEnter Age (in year):");
    scanf("%d",& age);
    printf("\nEnter Height (in feets):");
    scanf("%f",& height);
    printf("\nEnter Gender:");
    fflush (stdin);
    scanf("%c",& gender);
    printf("-------------------------------------------------------\n");
    printf("\n Name \t\t Age(years) \t height(feets) \t Gender");
    printf("\n %s \t\t %d \t %f \t %c\n",name,age,height,gender);
    printf("-------------------------------------------------------\n");

    return 0;
}
