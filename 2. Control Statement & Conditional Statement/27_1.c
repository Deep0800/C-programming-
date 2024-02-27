/*
WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case
*/

#include<stdio.h>

int main(){
    int i;
    char ch;
    printf("Enter a week:\n");
    scanf("%c",&ch);
    switch(ch){
        case '1':
            printf("Monday\n");
            break;
        case '2':
            printf("Tuesday\n");
            break;
        case '3':
            printf("Wednesday\n");
            break;
        case '4':
            printf("Thursday\n");
            break;
        case '5':
            printf("Friday\n");
            break;
        case '6':
            printf("Saturday\n");
            break;
        case '7':
            printf("Sunday\n");
            break;
        default:
            printf("Enter valid input\n");
            break;
        return 0;
    }
}