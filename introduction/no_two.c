#include<stdio.h>
void main()
{
    int radius;
    int area,circumference;

    printf("Enter the radius of the circle : \n");
    scanf("%d", &radius);

    area = (22 / 7)* radius * radius;
    circumference = 2 * (22 / 7) * radius;

    printf("The area of the circle of radius %d is %d while the circumference is %d",radius,area,circumference);
}
