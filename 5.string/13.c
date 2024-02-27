/*
Write a program in C to remove characters from a string except alphabets.
*/

#include <stdio.h>
#include <ctype.h>

void removeNonAlphabets(char str[])
{
    int i, j;

    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

int main()
{
    char str[1000];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    removeNonAlphabets(str);

    printf("String after removing non-alphabetic characters: %s\n", str);

    return 0;
}
