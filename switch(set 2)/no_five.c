#include <stdio.h>
void main()
{
    int marks[5];
    int average;
    int total = 0;

    for(int i=0; i<5; i++)
    {
        printf("Enter the marks for the subject \n");
        scanf("%d", & marks[i]);
        total += marks[i];
    }

    average = (total)/5;

    if(average>=75 && average<=100)
    {
        printf("Distinction.Your average is %d \n",average);
    }
    else if(average>=65)
    {
        printf("Credit.Your average is %d \n" ,average);
    }
    else if(average>=50)
    {
        printf("Pass.Your average is %d \n",average);
    }
    else if(average<50)
    {
        printf("Fail.Your average is %d \n",average);
    }
    else
    {
        printf("the marks you entered are invalid \n");\
    }
}
