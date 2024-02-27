/*Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/

#include <stdio.h>

int main()
{
    int sal, insurance, amount, amount2, loan;
    printf("Enter your salary: ");
    scanf("%d", &sal);

    insurance = (sal * 10) / 100;
    printf("Salary with 10%% insurance deduction: %d", insurance);
    amount = sal - insurance;
    printf("\nRemaining salary: %d", amount);

    loan = (insurance * 10) / 100;
    printf("\nSalary with 10%% loan deduction: %d", loan);
    amount2 = amount - loan;
    printf("\nRemaining salary: %d", amount2);
}