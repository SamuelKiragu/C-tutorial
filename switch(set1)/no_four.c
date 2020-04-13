#include<stdio.h>
void main()
{
    int number1,number2;
    int total;

    printf("Enter two numbers -> ");
    scanf("%d %d", &number1, &number2);

    if(number1>number2)
    {
        total = number1 - number2;
        printf("%d",total);

    }
    else if(number1>number2)
    {
        total = number1 / number2;
        printf("%d",total);
    }
    else
    {
        total = number1 + number2;
        printf("%d",total);
    }
}

