//Write a program in C to extract a substring from a given string

#include <stdio.h>

void substring(char source[], int start, int length, char destination[]) {
    int i;

    for (i = 0; i < length && source[start + i] != '\0'; i++) {
        destination[i] = source[start + i];
    }

    destination[i] = '\0';
}

int main() {
    char str[100], substr[100];
    int start, length;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Enter the starting index of the substring: ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    substring(str, start, length, substr);

    printf("Substring: %s\n", substr);

    return 0;
}
