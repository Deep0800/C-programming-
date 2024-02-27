//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        int series_sum = 0;
        for(j = 1; j <= i; j++) {
            series_sum += j;
        }
        sum += series_sum;
    }
    
    printf("Sum of the series is: %d\n", sum);
    
    return 0;
}