#include<stdio.h>
void main()
{
    int numb;
    int i;
    int sum = 0;
    int result;

    printf("Enter the number: ");
    scanf("%d",&numb);

    result = numb / 100;
    sum = sum + result;
    numb = numb - (100 * result);

    result = numb / 10;
    sum = sum + result;
    numb = numb - (10 * result);

    result = numb;
    sum = sum + numb;

    printf("%d",sum);



}
