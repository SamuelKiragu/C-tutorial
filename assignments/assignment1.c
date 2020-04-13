#include<stdio.h>

void main()
{
    float marks;

    printf("Enter the marks scored : \n");
    scanf("%f", &marks);

    for(marks; marks > 100 || marks < 0;)
    {
        printf("Error: The marks entered are invalid. Please try again.\n");
        printf("Enter the marks scored : \n");
        scanf("%f", &marks);
    }

    if(marks >= 70 && marks < 100)
    {
        printf("A");
    }
    else if (marks >= 60)
    {
        printf("B");
    }
    else if(marks >= 50)
    {
        printf("C");
    }
    else if(marks >= 40)
    {
        printf("D");
    }
    else if(marks >= 0)
    {
        printf("E");
    }
}
