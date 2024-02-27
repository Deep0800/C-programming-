// WAP to calculate swap 2 numbers with using of multiplication and division.

#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("\nAfter swapping, first number = %d\n", a);
    printf("After swapping, second number = %d\n", b);

    return 0;
}
