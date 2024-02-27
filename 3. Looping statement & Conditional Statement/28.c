//1 2 3 6 9 18 27 54...

#include <stdio.h>

int main() {
    int n, i;
    int sequence[100];
    
    printf("Enter the number of terms you want in the sequence: ");
    scanf("%d", &n);

    sequence[0] = 1; 
    sequence[1] = 2; 
    sequence[2] = 3; 


    for (i = 3; i < n; i++) {
        if (i % 2 == 0) { 
            sequence[i] = sequence[i - 1] * 2;
        } else { 
            sequence[i] = sequence[i - 1] * 3;
        }
    }

    printf("The sequence is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", sequence[i]);
    }
    printf("\n");

    return 0;
}
