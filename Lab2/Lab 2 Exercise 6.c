#include <stdio.h>
int main()
{
    int notes_10, notes_50, notes_100, withdrawn_amount;
    printf("Withdrawn Amount:");
    scanf("%d",& withdrawn_amount);
    notes_100 = withdrawn_amount / 100;
    notes_50 = (withdrawn_amount %100)/50;
    notes_10 = ((withdrawn_amount %100)%50)/10;
    printf("\n Number of 10 Rupee Notes:%d", notes_10);
    printf("\n Number of 50 Rupee Notes:%d", notes_50);
    printf("\n Number of 100 Rupee Notes:%d", notes_100);
return 0;
}
