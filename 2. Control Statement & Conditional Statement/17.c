/*
 Write a C program to check whether a triangle can be formed with the given 
values for the angles.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s,area;
    printf("Enter the values of a, b and c: ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    if(area==s)
        printf("The triangle can be formed.");
    else
        printf("The triangle cannot be formed.");
    return 0;
}