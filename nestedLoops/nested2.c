#include<stdio.h>
void main()
{
    int i;
    int j;

    for(i = 2; i <= 6; i++)
    {
        for(j = i; j <= (i + (i - 2)); j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
