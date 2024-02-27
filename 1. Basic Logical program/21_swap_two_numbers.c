/*
 Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable
*/

#include <stdio.h>
int main()
{
    int num1, num2, temp, a, b;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping, first number = %d\n", num1);
    printf("After swapping, second number = %d\n", num2);

    printf("\nEnter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping, first number = %d\n", a);
    printf("After swapping, second number = %d\n", b);

    return 0;
}
