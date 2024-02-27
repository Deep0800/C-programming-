/*
WAP to reverse a string and check that the string is palindrome or not
*/

#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {

        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int isPalindrome(char str[]) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    if (isPalindrome(str)) {
        printf("The reversed string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The reversed string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
