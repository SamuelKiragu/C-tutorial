#include<stdio.h>
void main()
{
    int salary;
    float sAllowance, rAllowance;
    float grossSalary;

    printf("Enter your salary: ");
    scanf("%d", &salary);

    //calculate the allowance
    sAllowance = 0.4 * salary;
    rAllowance = 0.2 * salary;

    grossSalary = salary + sAllowance + rAllowance;

    printf("%f", grossSalary);
}
