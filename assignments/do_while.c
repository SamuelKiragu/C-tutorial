#include<stdio.h>
void main()
{
    int i,j,k = 4;

    i = 1;
    do
    {
        j = 1;
        do
        {
            printf("%d ",k);
            k = k + 4;
            j++;
        }while(j <= i);
        i++;
        printf("\n");
    }while(i <= 5);
}
