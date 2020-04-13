#include<stdio.h>
void main()
{
    float in_deg,in_far;

    printf("Enter the temperature in degrees: \n");
    scanf("%f",& in_deg);

    in_far = (in_deg - 32) * (5 / 9);

    printf("The temperature in Fahreinheit is %f",in_far);
}
