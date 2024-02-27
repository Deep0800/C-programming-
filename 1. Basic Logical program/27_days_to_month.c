// Convert days into months

#include <stdio.h>

int main()
{
    int days;
    float months;
    printf("Enter the days: ");
    scanf("%d", &days);
    months = days / 30.0;
    printf("%d days= %.2f months",days, months);
}