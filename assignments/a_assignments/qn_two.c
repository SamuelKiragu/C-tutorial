#include <stdio.h>
void main()
{
    float distance;
    float dM,dCm;

    printf("Enter the distance between the two cities(km): ");
    scanf("%f", &distance);

    dM = distance * 1000;
    dCm = dM * 100;

    printf("The distance in Metres is %f while the distance in centimetres is %f", dM, dCm);

}
