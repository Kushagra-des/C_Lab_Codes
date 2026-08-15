#include <stdio.h>
int main ()
{
    int a;
    printf("Distance measured in KM is:\n");
    scanf("%d",&a);
    int b=a*1000;
    int e=b*100;
    int c=b*3.3;
    int d=c*12;

    printf("\n Distance in kilometer:%d",a);
    printf("\n Distance in meter:%d",b);
    printf("\n Distance in centimeter:%d",e);
    printf("\n Distance in feets:%d",c);
    printf("\n Distance in inch:%d",d);
    return 0;
}
