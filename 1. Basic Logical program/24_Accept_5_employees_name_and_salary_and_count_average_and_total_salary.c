// Accept 5 employees name and salary and count average and total salary

#include <stdio.h>

int main()
{
    char name1, name2, name3, name4, name5;
    int sal1, sal2, sal3, sal4, sal5, total_sal, avg_sal;

    printf("Enter your Name: \n");
    scanf("%s", &name1);
    scanf("%s", &name2);
    scanf("%s", &name3);
    scanf("%s", &name4);
    scanf("%s", &name5);

    printf("Enter your Salary: \n");
    scanf("%d", &sal1);
    scanf("%d", &sal2);
    scanf("%d", &sal3);
    scanf("%d", &sal4);
    scanf("%d", &sal5);

    total_sal = sal1 + sal2 + sal3 + sal4 + sal5;
    printf("\ntotal salary is: %d", total_sal);

    avg_sal = total_sal / 5;
    printf("\nAverage salary is: %d", avg_sal);
}