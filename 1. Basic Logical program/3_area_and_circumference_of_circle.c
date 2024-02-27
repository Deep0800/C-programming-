// WAP to Find Area And Circumference of Circle

#include <stdio.h>
#define PI 3.14159

int main()
{
    int radius;
    float area, circumference;
    printf("Enter the radius: \n");
    scanf("%d", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of Circle: %.2f\n", area);
    printf("Area of circumference: %.2f\n", circumference);
}