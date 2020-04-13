#include<stdio.h>
float amount_due_calculator(float curr_bal,float prev_bal);
void main()
{
    float current_fees,previous_fees;
    float total;

    printf("Enter the current fee balance: ");
    scanf("%f",&current_fees);

    printf("\nEnter the previous fee balance: ");
    scanf("%f",&previous_fees);

    total = amount_due_calculator(current_fees,previous_fees);

    printf("The amount due is %f",total);


}
float amount_due_calculator(float curr_bal,float prev_bal)
{
    float interest,totalbal;

    if(curr_bal >= 40000)
    {
        interest = 0.08 * curr_bal;
        curr_bal += interest;
    }
    else if(curr_bal >= 20000)
    {
        interest = 0.06 * curr_bal;
        curr_bal += interest;
    }
    else if(curr_bal >=  0)
    {
        interest = 0;
        curr_bal += interest;
    }

    interest = 0.12 * prev_bal;
    prev_bal += interest;

    totalbal = prev_bal + curr_bal;
    return totalbal;
}
