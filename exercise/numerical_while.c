#include<stdio.h>
void main()
{
    int numb;
    int i = 1000;
    int sum = 0;
    int result;

    printf("Enter the number:");
    scanf("%d",&numb);

    while(i >= 1)
    {
        result = numb / i;

        if(result < 10)
        {
            sum = sum + result;
            numb = numb - (i * result);
            i = i / 10;
        }
        else
        {
            i = i * 10;
        }

    }
    printf("%d",sum);
}
