#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    printf("Enter a:");
    scanf("%d",& a);
    printf("Enter b:");
    scanf("%d", & b);
    printf("Enter c:");
    scanf("%d", & c);

    float arthimatic_expression = 2*a*(log10((4*a*a)/b))+ abs(b*c-c*c)- 5* sqrt(c) + cos(30);
    int logical_expression = (a||!b) && (a||c) || a && b && c  || b && c;
    int bitwise_expression = (a|~b) & (a|c) | a & b & c | b & c;
    printf("arthimatic Expression: %f \n", arthimatic_expression);
    printf("logical Expression: %b \n", logical_expression);
    printf("bitwise Expression: %d \n", bitwise_expression);
return 0;
}


