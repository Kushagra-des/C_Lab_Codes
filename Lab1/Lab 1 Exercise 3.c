#include <stdio.h>
int main()
{
    char name[100];
    int age;
    float height;
    char gender;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height in feet: ");
    scanf("%f", &height);
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f feet\n", height);
    printf("Gender: %c\n", gender);
    return 0;
}
