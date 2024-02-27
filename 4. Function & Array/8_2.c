/*
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address 
and age
b. Write a program of structure for five employee that 
provides the following information -print and display 
empno, empname, address and age
*/

#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};


void printEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
    printf("\n");
}

int main() {

    struct Employee employees[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf("%s", employees[i].empname);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("\n");
    }

    printf("Details of all employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printEmployee(employees[i]);
    }

    return 0;
}
