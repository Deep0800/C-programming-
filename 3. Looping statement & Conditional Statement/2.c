//WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>

int main() {
  int numbers[5];
  int i;

  for (i = 0; i < 5; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  for (i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
  }

  return 0;
}