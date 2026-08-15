#include <stdio.h>
int main ()
{
    int a=8,b=29;
    float c=15.53,d=7.254;
    printf("\n Question (i)");
    float sf=(float)a+(float)b+c+d;
    printf("\nSum: %f", sf/4);

    printf("\n\n question (ii)");
    int s=a+b+(int)c+(int)d;
    printf("\nSum: %d",s);
    printf("\nAverage: %0.2f",(float)s/4);

    printf("\n\n question (iii)");
    printf("\nMultiplication of c*d: %0.2f",c*d);

    printf("\n\n question (iv)");
    printf("\nQuotient: %d",b/a);
    printf("\nRemainder: %d",b%a);

    printf("\n\n question (v)");
    printf("\nMultiplication of (a*b) in octal form: %0",a*b);

    printf("\n\n question (vi)");
    printf("\nMultiplication of (a*b) in Hexadecimal form: %X",a*b);
    return 0;

}
