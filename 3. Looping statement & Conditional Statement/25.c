// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <stdio.h> 
  
int Series(int n) 
{ 
    int i; 
    int sums = 0; 
    for (i = 1; i <= n; i++) 
        sums += (i * i); 
    return sums; 
} 
int main() 
{ 
    int n = 3; 
    int res = Series(n); 
    printf("%d", res); 
} 