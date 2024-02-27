/*Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)*/

#include <stdio.h>

int main()
{
    int num1, num2, result;
    printf("Enter the value of number 1 abd number 2: ");
    scanf("%d %d", &num1, &num2);

    // addition
    result = num1 + num2;
    printf("\nAddition of number 1 abd number 2 is: %d", result);

    // subtraction
    result = num1 - num2;
    printf("\nSubtraction of number 1 abd number 2 is: %d", result);

    // multiplication
    result = num1 * num2;
    printf("\nMultiplication of number 1 abd number 2 is: %d", result);

    // division
    result = num1 / num2;
    printf("\nDivision of number 1 abd number 2 is: %d", result);

    // modulo
    result = num1 % num2;
    printf("\nModulo of number 1 abd number 2 is: %d", result);
}