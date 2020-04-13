#include<stdio.h>
void main()
{
    float d_metres,d_km,t_min,t_h;
    float s;

    printf("Enter the distance travelled in metres -> \n");
    scanf("%f", &d_metres);

    printf("Enter the time taken in minutes -> \n");
    scanf("%f", &t_min);

    //changing the metres into kilometres and minutes to hours
    d_km = d_metres / 1000;
    t_h = t_min / 60;

    //speed calculation
    s = d_km / t_h;

    printf("%f",s);

}
