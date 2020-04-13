#include<stdio.h>

void main()
{
    int i;
    int sum = 0;
    float average;
    int numb;

    for(i = 1; i <= 30; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&numb);
        sum = sum + numb;
    }
    average = sum / 30;
    printf("the sum is %d while the average is %f",sum,average);
}
