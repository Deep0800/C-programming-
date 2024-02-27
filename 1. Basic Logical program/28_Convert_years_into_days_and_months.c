// Convert years into days and months


#include <stdio.h>

int main()
{
    int years, days, months;
    printf("Enter years: ");
    scanf("%d", &years);

    days = years * 365;
    printf("%d Days\n", days);

    months = years * 12;
    printf("%d Months", months);
}