//Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int numbers[5];
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nFactorials:\n");
    for (i = 0; i < 5; i++) {
        printf("Factorial of %d: %d\n", numbers[i], factorial(numbers[i]));
    }

    return 0;
}
