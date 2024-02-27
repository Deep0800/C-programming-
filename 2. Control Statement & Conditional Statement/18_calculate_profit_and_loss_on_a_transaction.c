//Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the amount: ");
    scanf("%d", &a);
    printf("Enter your amount after transaction: ");
    scanf("%d", &b);
    if(b>a){
        printf("Profit");
    }
    else if(b<a){
        printf("Loss");
    }
    else{
        printf("No Profit or Loss");
    }
    return 0;
}