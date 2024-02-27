// convert years into days and days into years

#include <stdio.h>

int main()
{
    int years, days;
    printf("Enter years: ");
    scanf("%d", &years);

    days = years * 365;
    printf("%d Days\n", days);

    years = days / 365;
    printf("%d Years", years);
}