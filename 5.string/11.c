/*
Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char sentence[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (islower(sentence[i]))
        {
            sentence[i] = toupper(sentence[i]);
        }
        else if (isupper(sentence[i]))
        {
            sentence[i] = tolower(sentence[i]);
        }
    }

    printf("Modified sentence: %s\n", sentence);

    return 0;
}
