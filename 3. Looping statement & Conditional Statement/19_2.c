/*
A
B C
D E F 
G H I J
K L M N O  
*/

#include <stdio.h>

int main() {
    int rows = 5;
    int counter = 0;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + counter);
            counter++;
        }
        printf("\n");
    }

    return 0;
}
