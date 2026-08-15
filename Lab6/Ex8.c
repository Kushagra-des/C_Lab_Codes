#include<stdio.h>
int main ()
{
    int row, col, i , j;
    printf("Enter the Row & Column:");
    scanf("%d %d", &row, &col);
    for(i = 0 ; i < row ; i ++)
    {
        int k = 0, p = 9;
        for ( j = 0 ; j < col ; j++)
        {
            if (j>=i)
                printf("%d", k++);
            else if (j<i)
                printf("%d", p--);
        }
        printf("\n");
    }
return 0;
}
