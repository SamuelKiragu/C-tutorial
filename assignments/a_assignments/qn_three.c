#include <stdio.h>
void main()
{
    int i;
    int marks[5];
    int total = 0, average;
    float percentage;

    //logic for entering marks within the given range five times
    for( i = 0; i < 5; i++)
    {
        do
        {
            printf("Enter the marks in subject %d: \n", i + 1);
            scanf("%d", &marks[i]);
            if(marks[i] > 100 || marks[i] < 0)
            {
                printf("Invalid marks kindly enter a value that is between 0 and 100 \n");
            }
        }while(marks[i] > 100 || marks[i] < 0);
    }

    //calculate the total of the five marks that are entered
    for( i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    average = total / 5;
    percentage = (total / 500 ) * 100;

    printf("Average mark scored by the student: %d, percentage score: %f", average, percentage);
}
