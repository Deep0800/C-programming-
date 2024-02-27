/*Write a C program to accept two integers and check whether they are equal 
or not*/

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two integers: \n");
    scanf("%d%d",&a,&b);
    if(a==b){
        printf("%d is equal to %d\n",a,b);
    }
    else{
        printf("%d is not equal to %d\n",a,b);
    }
    return 0;
}