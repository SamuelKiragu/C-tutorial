#include<stdio.h>
void main()
{
    int i,j,k,s;

    for(i = 1; i <= 5; i++)
    {
        for(j = i * i; j <= i * 5; j = j + i)
        {
            printf("%d ",j);
        }
        printf("\n");

        for(s = i; s > 1; s--)
        {
            printf("   ");
        }
    }
}
