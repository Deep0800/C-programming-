// Convert kilometers into meters

#include <stdio.h>

int main()
{
    int kilometers, meters;
    printf("Enter kilometers: ");
    scanf("%d", &kilometers);

    meters = kilometers * 1000;
    printf("%d meters\n", meters);

    return 0;
}