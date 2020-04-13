#include<stdio.h>
void main()
{
    int salary;
    int net_salary;
    int tax;

    printf("Enter your gross salary -> ");
    scanf("%d",& salary);

    if(salary > 40000)
    {
        tax=0.30*salary;
        net_salary=salary-tax;

        printf("you tax is %d",tax);
        printf("\n Your net salary is %d\n", net_salary);
    }
    else if(salary >= 30000&&salary < 40000)
    {
        tax=0.25*salary;
        net_salary=salary-tax;

        printf("you tax is %d",tax);
        printf("\n Your net salary is %d\n", net_salary);
    }
    else if( salary >= 20000 && salary < 30000 )
    {
        tax=0.15*salary;
        net_salary=salary-tax;

        printf("you tax is %d",tax);
        printf("\n Your net salary is %d\n", net_salary);
    }
    else if( salary >= 10000 && salary < 20000 )
    {
        tax=0.10*salary;
        net_salary=salary-tax;

        printf("you tax is %d",tax);
        printf("\n Your net salary is %d\n", net_salary);
    }
    else if(salary < 10000)
    {
        tax=0;
        net_salary=salary-tax;

        printf("you tax is %d",tax);
        printf("\n Your net salary is %d\n", net_salary);
    }
    else
    {
        printf("Enter a correct figure for your salary");
    }
}
