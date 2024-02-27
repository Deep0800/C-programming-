//Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLargestAndSmallestWords(char str[]) {
    char smallestWord[100], largestWord[100];
    int smallestLength = 1000, largestLength = 0;

    char *token;
    token = strtok(str, " ");

    while (token != NULL) {
        int i, j;
        for (i = 0, j = 0; token[i] != '\0'; i++) {
            if (isalpha(token[i])) {
                token[j++] = token[i];
            }
        }
        token[j] = '\0';

        if (strlen(token) < smallestLength) {
            smallestLength = strlen(token);
            strcpy(smallestWord, token);
        }

        if (strlen(token) > largestLength) {
            largestLength = strlen(token);
            strcpy(largestWord, token);
        }

        token = strtok(NULL, " ");
    }

    printf("Smallest word: %s\n", smallestWord);
    printf("Largest word: %s\n", largestWord);
}
int main() {
    char str[1000];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    findLargestAndSmallestWords(str);

    return 0;
}
