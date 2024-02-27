// Calculate person’s insurance premium based on salary

#include <stdio.h>

int main()
{
    int income, insurance, interest_rate, time, insurance_premium;
    printf("Enter your income: \n");
    scanf("%d", &income);

    printf("Enter your insurance amount: \n");
    scanf("%d", &insurance);

    printf("Enter your insurance rate: \n");
    scanf("%d", &interest_rate);

    printf("Enter your your insurance period (In Months): \n");
    scanf("%d", &time);

    insurance_premium = insurance * interest_rate / 100 * time / 12;
    printf("Your Insurance premium: %d", insurance_premium);
}