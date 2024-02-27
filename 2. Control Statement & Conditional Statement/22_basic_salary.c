/*
Write a C program to input basic salary of an employee and calculate its 
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\
*/

#include<stdio.h>

int main(){
    int basic_salary;
    float hra, da;
    
    printf("Enter basic salary: ");
    scanf("%d", &basic_salary);
    
    if(basic_salary <= 10000){
        hra = 20;
        da = 80;
    }
    else if(basic_salary <= 20000){
        hra = 25;
        da = 90;
    }
    else{
        hra = 30;
        da = 95;
    }
    
    printf("Gross salary: %.2f\n", basic_salary + (basic_salary*hra/100) + (basic_salary*da/100));
    
    return 0;
    
}