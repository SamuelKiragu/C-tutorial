#include<stdio.h>
void main()
{
    int number;

    printf("Enter a number -> \n");
    scanf("%d", &number);

    if(number%9==0&&number%2==0)
    {
        printf("The number you entered is evenly divisible by 9 \n");
    }
    else
    {
        printf("The number you entered is not evenly divisible by 9 \n");
    }
}
