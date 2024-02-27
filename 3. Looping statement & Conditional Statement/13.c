//calculate the Factorial of a Given Number using while loop

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is %d",n,fact);
    getch();
    return 0;
}