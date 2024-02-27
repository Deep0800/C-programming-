//Write a program to find out the max from given number

#include <stdio.h>
void main()
{
    int a[5], i, max = 0, min = 0;
    printf("Enter Five Value :");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }

    }
    printf("Maximum is : %d\n", max);
}