// Convert country’s name in abbreviate form

#include <stdio.h>

int main()
{

    char cname[10];
    printf("Enter your country name: \n");
    scanf("%s", cname);
    printf("Abbreviated Name: ");
    printf("%c. %c. %c\n", cname[0], cname[1], cname[2]);
    return 0;
}