/*Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/

#include <stdio.h>

int main()
{
    int stud, apple;
    printf("Enter the number of students: ");
    scanf("%d", &stud);

    apple = stud * 5;
    printf("Total apple required is: %d", apple);
    return 0;
}