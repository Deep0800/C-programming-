/*
C Program to Check Uppercase or Lowercase or Digit or Special 
Character
*/

#include<stdio.h>

int main(){
    char ch;
    printf("Enter value: ");
    scanf("%c",&ch);

    if(ch>='0' && ch<='9'){
        printf("%d is a digit",ch);
    }
    else if(ch>='a' && ch<='z'){
        printf("%c is a lowercase",ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf("%c is a uppercase",ch);
    }
    else{
        printf("%c is a special character",ch);
    }
}