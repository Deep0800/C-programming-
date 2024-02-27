// Find area of Triangle Formula : A = 1/2 × b × h

#include <stdio.h>

int main()
{
    int A, b, h;
    printf("Enter the base: \n");
    scanf("%d", &b);
    printf("Enter the height: \n");
    scanf("%d", &h);

    A = (b * h) / 2;
    printf("Area of triangle is: %d\n", A);
}