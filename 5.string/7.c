/*
Write a program in C to copy one string to another string.
*/

#include <stdio.h>

void stringCopy(char source[], char destination[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int main()
{
    char source[100], destination[100];

    printf("Enter a string: ");
    scanf("%[^\n]", source);

    stringCopy(source, destination);

    printf("Copied string: %s\n", destination);

    return 0;
}
