#include<stdio.h>
void main()
{
    int number1,number2;
    int total;

    printf("Enter two numbers -> ");
    scanf("%d %d", &number1, &number2);

    if(number1 >= number2 && number2 != 0)
    {
        total = number1 / number2;

        printf("%d",total);

    }
    else if(number2 >= number1 && number1 != 0)
    {
        total = number2 / number1;

        printf("%d",total);
    }
    else
    {
        printf("can not perform the operation");
    }
}


