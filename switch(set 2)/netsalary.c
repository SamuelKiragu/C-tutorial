#include<stdio.h>
void main()
{
    int salary;
    int net_salary;

    printf("Enter your salary -> ");
    scanf("%d",& salary);

    if(salary>=20000)
    {
        net_salary=salary-(0.15*salary);
        printf("\n Your net salary is %d\n", net_salary);
    }
    else if(salary<20000&&salary>=10000)
    {
        net_salary=salary-(0.10*salary);
        printf("\n Your net salary is %d\n", net_salary);
    }
    else
    {
        net_salary=salary;
        printf("\n Your net salary is %d\n", net_salary);
    }

}
