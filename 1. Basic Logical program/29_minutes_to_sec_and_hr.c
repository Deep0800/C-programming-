// Convert minutes into seconds and hours

#include <stdio.h>

int main()
{
    int minutes, seconds, hours;
    printf("Enter the minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;
    printf("%d Seconds\n", seconds);

    hours = minutes / 60;
    printf("%d hours", hours);
}