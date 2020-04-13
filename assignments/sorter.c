#include<stdio.h>

void main()
{
    int i,j;
    int unsorted[30];
    int a;

    for(i = 0; i < 30; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&unsorted[i]);
    }

    for(i = 0; i < 30; i++)
    {
        printf("\nUnsorted: ");
        printf("\n%d",unsorted[i]);
    }


    for(i = 0; i < 30; i++)
    {
        for(j = i; j < 30; j++)
        {
            if(unsorted[i] > unsorted[j])
            {
                a = unsorted[i];
                unsorted[i] = unsorted[j];
                unsorted[j] = a;
            }
        }
    }


    for(i = 0; i < 30; i++)
    {
        printf("\sorted: %d",unsorted[i]);
    }
}
