#include<math.h>
#include<stdio.h>
int main()
{
    float weight, height, BMI;
    printf("Enter the weight of the person:\n");
    scanf("%f", &weight);
    printf("Enter the height of the person:\n");
    scanf("%f", &height);
    BMI = weight / (height * height);
    printf("Your body mass index is : %.2f\n", BMI);
    int a = BMI;

    switch(a)
    {
        case 0 ... 17:
        printf("Underweight");
        break;

        case 18 ... 24:
        printf("Normal weight");
        break;

        case 25 ... 50:
        printf("Overweight");
        break;
    }
    return 0;
}
