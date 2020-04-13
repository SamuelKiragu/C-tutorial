#include<stdio.h>
void main()
{
    int number;

    printf("Enter a number -> \n");
    scanf("%d", & number);

    if(number%2==0)
    {
        printf("The number you entered is even");
    }
    else
    {
        printf("The number you entered is odd");
    }

}
