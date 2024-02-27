// Calculate person’s Annual salary

#include <stdio.h>

int main()
{
    int sal, annual_sal;
    printf("Enter your salary: \n");
    scanf("%d", &sal);

    annual_sal = sal * 12;
    printf("Annual salary is: %d", annual_sal);
    return 0;
}