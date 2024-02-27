
//Accept marks from user and check pass or fail

#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks>=80){
        printf("A");
    }
    else if(marks>=70 && marks<80){
            printf("B");
    }
    else if(marks>=55 && marks<70){
        printf("C");
    }
    else if(marks>=35 && marks<55){
        printf("D");
    }
    else if(marks<35){
            printf("Failed!!!");
    }
}