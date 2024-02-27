// Calculate person’s Annual salary

#include <stdio.h>
#include <math.h>

int main()
{
    float compound_interest, principle, rate, time, amount;
    printf("Enter the principle amount: \n");
    scanf("%f", &principle);
    printf("Enter the rate of interest: \n");
    scanf("%f", &rate);
    printf("Enter the time period: \n");
    scanf("%f", &time);

    amount = principle * (pow((1 + rate / 100), time));
    printf("Circumference of Triangle is: %f\n", amount);

    compound_interest = amount - principle;
    printf("Compound Interest is: %f", compound_interest);
}