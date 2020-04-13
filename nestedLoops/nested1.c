#include<stdio.h>
void main()
{
    int i;
    int j;

    for(i = 1; i <= 5; i++)
    {
        for(j = (i * 10); j <= (i * 10)+((i-1)*10); j = j + 10)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
