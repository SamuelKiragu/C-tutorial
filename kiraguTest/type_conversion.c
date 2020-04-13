#include<stdio.h>
void main()
{
    //this is the use of the automatic type conversion that is normally there
    float price = 6.50;
    int increase = 2;
    float new_price;

    new_price = price + increase;
    printf("New price is %4.2f",new_price);

    //this is type conversion using force AKA: TYPE CASTING
    float average;
    int total = 23;
    int count = 4;

    average = (float) total / count;

    printf("6%f",average);
}
