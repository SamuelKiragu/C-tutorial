#include<stdio.h>
void main()
{
    int in_cm,in_m;

    printf("Enter the measurement in cm -> \n");
    scanf("%d",&in_cm);

    in_m = in_cm / 100;

    printf("Your measurement in metres is %d",in_m);
}
