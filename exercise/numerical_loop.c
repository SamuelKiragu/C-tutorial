#include<stdio.h>
void main()
{
    int numb;
    int i;
    int sum = 0;
    int result;

    printf("Enter the number: ");
    scanf("%d",&numb);

    for(i = 100; i > 0; i = i/10)
    {
    result = numb / i;
    sum = sum + result;
    numb = numb - (i * result);
    }

    printf("%d",sum);
}
