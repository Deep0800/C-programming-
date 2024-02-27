// Find area of Rectangle Formula : A=wl

#include <stdio.h>

int main()
{
    int A, w, l;
    printf("Enter the width: \n");
    scanf("%d", &w);
    printf("Enter the length: \n");
    scanf("%d", &l);

    A = w * l;
    printf("Area of rectangle is: %d\n", A);
}