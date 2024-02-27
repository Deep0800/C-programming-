//WAP to print Fibonacci series up to given numbers

#include <stdio.h>
int main() {
  int n1 = 0, n2 = 1, n3 = 0, n;
  printf("Enter a positive number: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", n1, n2);
  n3 = n1 + n2;

  while (n3 <= n) {
    printf("%d, ", n3);
    n1 = n2;
    n2 = n3;
    n3 = n1 + n2;
  }

  return 0;
}
