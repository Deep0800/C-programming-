/*
C Program to Check Uppercase or Lowercase or Digit or Special 
Character
*/

#include <stdio.h>

int main()
{
    int n1 = 50, n2 = 10, n3 = 15, max;
    max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    printf("Largest number is %d.", n1, n2, n3, max);

    return 0;
}