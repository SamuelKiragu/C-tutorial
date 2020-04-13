#include<stdio.h>
void main()
{
    float w_g,w_kg;
    int package_no;

    printf("Enter the weight of the package in grams -> \n");
    scanf("%f",&w_g);

    w_kg = w_g / 1000;
    package_no = 1 / w_kg;

    printf("the weight of the package in kgs is %f and %d of them form 1kg",w_kg,package_no);
}
