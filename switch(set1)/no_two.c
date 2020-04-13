#include <stdio.h>
void main()
{
    int number_one,number_two;
    char operate;

    printf("Enter an operator: ");
    scanf("%c", &operate);

    printf("Enter two numbers: ");
    scanf("%d", &number_one);
    scanf("%d", &number_two);



    switch(operate)
    {
        case '+':
            printf("%d",number_one + number_two);
            break;

        case '-':
            printf("%d",number_one - number_two);
            break;

        case '*':
            printf("%d",number_one * number_two);
            break;

        case '/':
            printf("%d",number_one / number_two);
            break;

        case '%':
            printf("%d",number_one % number_two);
            break;

        default:
            printf("Invalid operator");
            break;
    }
    printf("%c",operate);
}
