// Write a program in C to count the total number of words in a string.

#include <stdio.h>

#define IN 1
#define OUT 0

int countWords(char str[])
{
    int state = OUT;
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            state = OUT;
        }
        else if (state == OUT)
        {

            state = IN;
            count++;
        }
    }

    return count;
}

int main()
{
    char str[1000];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int wordCount = countWords(str);

    printf("Total number of words in the string: %d\n", wordCount);

    return 0;
}
