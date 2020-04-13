#include<stdio.h>

void main()
{
    int i = 10;
    int j;
    int remainder,prime;
    for(i; i <= 50; i++)
    {
        int count = 0;
        for(j = 2; j < i; j++)
        {
            remainder = i % j;

            if (remainder == 0)
                break;
            else if(j == i-1)
                printf("%d\n",i);
        }
    }
}
