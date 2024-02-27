// Accept 5 expense from user and find average of expense

#include <stdio.h>

int main()
{
    int expense_1, expense_2, expense_3, expense_4, expense_5, total_expense, avg_expense;

    printf("Enter your Expense: \n");
    scanf("%d", &expense_1);
    scanf("%d", &expense_2);
    scanf("%d", &expense_3);
    scanf("%d", &expense_4);
    scanf("%d", &expense_5);

    total_expense = expense_1 + expense_2 + expense_3 + expense_4 + expense_5;
    printf("total salary is: %d\n", total_expense);

    avg_expense = total_expense / 5;
    printf("Average salary is: %d", avg_expense);
}