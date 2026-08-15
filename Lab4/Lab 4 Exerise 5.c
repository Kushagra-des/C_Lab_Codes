#include<stdio.h>

int main()
{
    int s=0,B,P,L,S,y;
    char X;
    printf("Do you want to order something?");
    scanf("%c",&X);
    switch(X=='y')
    {
        case 1:
            printf("Enter the number of Pizza's:");
            scanf("%d",&P);
            s=s+P*125;
        case 2:
            printf("Enter the number of Burger's:");
            scanf("%d",&B);
            s=s+B*80;
        case 3:
            printf("Enter the number of Sandwiches:");
            scanf("%d",&S);
            s=s+S*60;
        case 4:
            printf("Enter the number of Lassi's:");
            scanf("%d",&L);
            s=s+L*40;
            break;
        default:
            printf("Thanks for visiting");
    }
    printf("The total bill=%d",s);
    return 0;
}
