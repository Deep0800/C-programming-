/*
WAP to accept the height of a person in centimeters and categorize the 
person according to their height.
*/

#include<stdio.h>

int main(){
    int height;
    printf("Enter height in cm: ");
    scanf("%d", &height);

    if(height<145){
        printf("You're height is short!\n");
    }
    else if(height>145 && height<160){
        printf("You're height is average!\n");
    }
    else if(height>=161 && height<=177){
        printf("You're Tall!\n");
    }
    else{
        printf("You're too tall!\n");
    }            
}