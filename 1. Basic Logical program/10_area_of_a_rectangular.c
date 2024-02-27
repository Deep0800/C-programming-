// find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h>

int main()
{
    int A, w, l, h;
    printf("Enter the length: \n");
    scanf("%d", &l);
    printf("Enter the width: \n");
    scanf("%d", &w);
    printf("Enter the height: \n");
    scanf("%d", &h);

    A = 2 * (w * l + h * l + h * w);
    printf("Circumference of Triangle is: %d\n", A);
}