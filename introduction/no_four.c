#include<stdio.h>
void main()
{
    int base,height;
    int area;

    printf("Enter the base and the height of the right angle triangle: \n");
    scanf("%d %d", &base,&height);

    area = 0.5 * (base * height);

    printf("the area is %d",area);

}
