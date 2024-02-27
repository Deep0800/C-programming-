/*
Accept 3 numbers from user using while loop and check each numbers 
palindrome
*/

#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    while(n1!=n2 && n2!=n3 && n3!=n1){
        if(n1>n2 && n1>n3){
            int temp=n1;
            n1=n2;
            n2=temp;
        }
        else if(n2>n1 && n2>n3){
            int temp=n2;
            n2=n1;
            n1=temp;
        }
        else if(n3>n1 && n3>n2){
            int temp=n3;
            n3=n1;
            n1=temp;
        }
    }
}