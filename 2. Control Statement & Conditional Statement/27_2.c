/*
WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case
*/

#include<stdio.h>

int main(){
char vowel;
printf("Enter a character:\n");
scanf("%c",&vowel);
    switch(vowel){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
            break;
    }
    return 0;
}