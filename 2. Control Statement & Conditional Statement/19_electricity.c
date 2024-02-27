/*
Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow :
*/

#include <stdio.h>
#include <conio.h>

int main(){
    char name;
    int id, unit;
    float charge;
    printf("Enter customer Name: ");
    scanf("%s", &name);

    printf("Enter the customer ID : ");
    scanf("%d", &id);
    
    printf("Enter the unit consumed : ");
    scanf("%d", &unit);
    
    if(unit<=350){
        charge = unit*1.20;
        printf("\nElectricity Bill : %.2f", charge);
    }
    else if(unit>350 && unit<600){
        charge = unit*1.50;
        printf("\nElectricity Bill : %.2f", charge);
    }
    else if(unit>=600 && unit<800){
        charge = unit*1.80;
        printf("\nElectricity Bill : %.2f", charge);
    }
    else{
        charge = unit*1.50;
        printf("\nElectricity Bill : %.2f", charge);
    }
    
}