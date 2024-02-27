// find the largest of three numbers.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the values: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        printf("A is Greater",a);
    }
    else if (b>a && b>c){
        printf("B is Greater",b);
    }
    else{
        printf("C is Greater",c);
    }
    
}