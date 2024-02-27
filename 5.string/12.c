/*
Write a program in C to find the number of times a given word 'is' appears in
the given string.
*/

#include <stdio.h>
#include <string.h>

int countWordIs(char str[])
{
    int count = 0;
    char *token;

    token = strtok(str, " ");

    while (token != NULL)
    {
        if (strcmp(token, "is") == 0)
        {
            count++;
        }
        token = strtok(NULL, " ");
    }

    return count;
}
int main()
{
    char str[1000];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int count = countWordIs(str);

    printf("Number of times 'is' appears in the string: %d\n", count);

    return 0;
}
