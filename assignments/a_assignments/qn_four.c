#include <stdio.h>
void main()
{
    float l, w, r;
    float rectperim,rectarea,circlearea,circleperim;
    float pi = (float)22 / 7;

    printf("Enter the length and width of a rectangle respectively: \n");
    scanf("%f %f", &l, &w);

    printf("Enter the radius of the circle");
    scanf("%f", &r);

    //calculate the required values
    rectarea = l * w;
    rectperim = 2 * (l + w);

    circlearea = pi * r * r;
    circleperim = pi * 2 * r;

    printf("Rectangle perimeter: %f \n, Rectangle area: %f \n, Circle area: %f \n, Circle perimeter: %f",rectperim,rectarea,circlearea,circleperim );
}
