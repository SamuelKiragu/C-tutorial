#include<stdio.h>
void main()
{
    int numb1,numb2;
    int sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &numb1);
    printf("\nEnter the second number: ");
    scanf("%d", &numb2);

    if(numb1 > numb2)
    {
        for(numb2; numb2 < numb1; ++numb2)
        {
            sum = sum + numb2;
        }
    }
    else
    {
        for(numb1; numb1 < numb2; numb1 = numb1 + 1)
        {
            sum = sum + numb1;
        }
    }
    printf("\n%d",sum);

}
