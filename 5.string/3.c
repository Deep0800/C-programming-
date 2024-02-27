//Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>

int main() {
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Print individual characters of the string in reverse order
    printf("Individual characters of the string in reverse order:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        // Do nothing, move to the end of the string
    }

    // Start from the end of the string and print each character backwards
    for (int j = i - 1; j >= 0; j--) {
        printf("%c\n", str[j]);
    }

    return 0;
}

