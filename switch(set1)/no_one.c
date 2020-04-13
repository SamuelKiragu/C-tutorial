#include <stdio.h>
void main()
{
    printf("****Jamal and Daughers Pub**** \n");
    printf("Beer Brand             Price \n");
    printf("1)Tusker               100/= \n");
    printf("2)Pilsner              120/= \n");
    printf("3)Smirnoff Ice         140/= \n");
    printf("4)White Cap             90/= \n");

    int choice,bottles_number,total;

    printf("Enter your choice : \n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("How many bottles do you want : \n");
            scanf("%d", &bottles_number);

            total = bottles_number*100;

            printf("%d bottles of Tusker will cost you %d",bottles_number,total);
            break;
        case 2:
            printf("How many bottles do you want : \n");
            scanf("%d", &bottles_number);

            total = bottles_number*120;

            printf("%d bottles of Pilsner will cost you %d",bottles_number,total);
            break;
        case 3:
            printf("How many bottles do you want : \n");
            scanf("%d", &bottles_number);

            total = bottles_number*140;

            printf("%d bottles of Smirnoff ice will cost you %d",bottles_number,total);
            break;
        case 4:
            printf("How many bottles do you want : \n");
            scanf("%d", &bottles_number);

            total = bottles_number*90;

            printf("%d bottles of White Cap will cost you %d",bottles_number,total);
            break;
        default:
            printf("the choice you've entered is invalid! \n");
    }


}
