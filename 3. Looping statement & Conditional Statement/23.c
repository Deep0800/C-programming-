//C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=n;i>0;i/=10)
    {
        rev=rev*10+i%10;
    }
    printf("Reverse of %d is %d",n,rev);
    return 0;
}