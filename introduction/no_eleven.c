#include<stdio.h>
#include<math.h>

void main()
{
    float numb;
    float square,cube,square_root,cube_root;

    printf("Enter a number -> \n");
    scanf("%f", &numb);

    //there are some operations that i am yet to do ive not been able to figure them out
    square = pow(numb,2);
    cube = pow(numb,3);
    square_root = sqrt(numb);
    cube_root=cbrt(numb);

    printf("number: %f \n square: %f \n",numb,square);
    printf("cube: %f \n  square root: %f \n cube root: %f \n",cube,square_root,cube_root);
}
