#include<stdio.h>
void main()
{
    int number1,number2,number3;
    int sum,product,average;

    printf("Enter three numbers : \n");
    scanf("%d %d %d", &number1,&number2,&number3);

    sum = number1 + number2 + number3;
    product = number1 * number2 * number3;
    average = (number1 + number2 + number3) / 3;

    printf("The sum of the three numbers is %d, The product of the three numbers is %d and the average of the three numbers is %d",sum,product,average);
}
