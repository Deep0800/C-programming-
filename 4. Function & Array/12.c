//WAP to accept 5 students name and store it in array

#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];

    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; 
    }

    printf("\nNames of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}
