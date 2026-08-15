#include <stdio.h>
int main()
{
    float mon,cpu,com;
    printf("Enter moniter power consuption(wh)");
    scanf("%f",&mon);
    printf("Enter cpu power consuption(wh)");
    scanf("%f",&cpu);
    printf("Enter other power consuption(wh)");
    scanf("%f",&com);

    float pwatt=(mon+cpu+com)*6;
    float mwatt=(pwatt*30)/1000;
    float mbill=mwatt*8;
    printf("\n monthly consuption unit:%f",mwatt);
    printf("\n monthly bill:%f",mbill);
    return 0;



}
