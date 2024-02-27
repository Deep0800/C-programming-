// Convert temperature Fahrenheit to Celsius

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter Fahrenheit:");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Celsius is: %f", celsius);
}