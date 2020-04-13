#include<stdio.h>
void main()
{
    int vehicle_speed,speed_limit;
    int difference;

    printf("Enter the speed of the vehicle : \n");
    scanf("%d",vehicle_speed);

    printf("Enter the speed limit of the vehicle : \n");
    scanf("%d",speed_limit);


    difference = vehicle_speed - speed_limit;

    if(difference < 30)
    {
        printf("Your fine is 2500");
    }
    else if(difference >30)
    {
        printf("Your fine is 4000");
    }
}
