// Find circumference of Triangle formula : triangle = a + b + c

#include <stdio.h>

int main()
{
    int triangle, a, b, c;
    printf("Enter the value for A: \n");
    scanf("%d", &a);
    printf("Enter the  value for B: \n");
    scanf("%d", &b);
    printf("Enter the  value for C: \n");
    scanf("%d", &c);

    triangle = a + b + c;
    printf("Circumference of Triangle is: %d\n", triangle);
}