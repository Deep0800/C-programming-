/*
Write a program in C to read any Month Number in integer and display the 
number of days for this month.
*/

#include<stdio.h>

int main(){

    int month;
    printf("Enter the Month Number: ");
    scanf("%d", &month);
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("The number of days for this month is %d", 31);
            break;
        case 2:
            printf("The number of days for this month is %d", 28);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("The number of days for this month is %d", 30);
            break;
        default:
            printf("Invalid Month Number");
            break; 
    }
}