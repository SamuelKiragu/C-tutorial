#include<stdio.h>
void main()
{
    int width,length;
    int perimeter,area;

    printf("Enter the width and length of the rectangle : \n");
    scanf("%d %d",&width,&length);

    perimeter = 2 * (length + width);
    area = length * width;

    printf("The perimeter of the rectangle is %d while the area of the rectangle is %d",perimeter,area);
}
