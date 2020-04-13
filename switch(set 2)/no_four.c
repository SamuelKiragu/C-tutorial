#include<stdio.h>
void main()
{
    int x,y;

    printf("Enter the value of x -> \n");
    scanf("%d",& x);

    if(x>5)
    {
        y=(4*x*x*x)+(2*x)-6;
        printf(" Since x is %d and is greater than five, the value of y is %d",x,y);
    }
    else if(x<5)
    {
        y=(3*x*x)-(4*x)+12;
        printf(" Since x is %d and is less than five, the value of y is %d",x,y);
    }
    else if(x==5)
    {
        y=(6*x)-5;
        printf(" Since x is %d and is equal to five, the value of y is %d",x,y);
    }
}

