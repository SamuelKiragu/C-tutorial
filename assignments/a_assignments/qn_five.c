#include <stdio.h>
void main()
{
    int i,num;
    int total = 0;

    printf("Enter a five digit number");
    scanf("%d", &num);

    for (i = 1; i <= 5; i++)
    {
        total += (num % 10);
        num = num / 10;
    }
    printf("total: %d", total);
}
