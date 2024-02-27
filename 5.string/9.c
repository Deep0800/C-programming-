/*
Write a program in C to find the maximum number of characters in a string.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int maxLength = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        maxLength++;
    }

    printf("Maximum number of characters in the string: %d\n", maxLength);

    return 0;
}
