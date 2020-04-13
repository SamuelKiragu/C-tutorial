#include<stdio.h>
void main()
{
    char gender;
    int gross_salary,net_salary;

    printf("Enter character 'm' if male and character 'f' if female -> \n");
    scanf("%c",& gender);
    printf("Enter your gross salary -> \n");
    scanf("%d",& gross_salary);

    if(gender == 'f' && gross_salary < 5000)
    {
        net_salary = gross_salary - (0.12 * gross_salary);
        printf("Your net salary is %d",net_salary);
    }
    else if(gender == 'f' && gross_salary >= 15000)
    {
        net_salary = gross_salary - (0.14 * gross_salary);
        printf("Your net salary is %d",net_salary);
    }
    else if(gender == 'm' && gross_salary<14000)
    {
        net_salary = gross_salary - (0.13 * gross_salary);
        printf("Your net salary is %d",net_salary);
    }
    else if(gender == 'm' && gross_salary >= 15000)
    {
        net_salary = gross_salary - (0.15 * gross_salary);
        printf("Your net salary is %d",net_salary);
    }
}
