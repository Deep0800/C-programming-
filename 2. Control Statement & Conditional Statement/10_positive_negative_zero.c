//Check Number Is Positive or Negative or zero

#include<stdio.h>

int main(){
    int a;
    printf("Enter the value: ");
    scanf("%d",&a);
    if(a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negative");
    }
    else{
        printf("Number is 0");
    }
}