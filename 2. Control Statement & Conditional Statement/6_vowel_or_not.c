//Find the Character Is Vowel or Not

#include<stdio.h>

int main(){
    char a, lower_vowel, upper_vowel;
    printf("Enter alphabet: ");
    scanf("%c",&a);
    
    upper_vowel=( a == 'A' || a == "E" || a == "I" || a == "O" || a == "U");
    lower_vowel=( a == 'a' || a == "e" || a == "i" || a == "o" || a == "u");

    if(lower_vowel || upper_vowel ){
        printf("Alphabet is Vowel.");
    }
    else{
        printf("Alphabet is not Vowel.");
    }
    return 0;
}


