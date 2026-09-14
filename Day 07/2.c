//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main(){
    char alphabet;
    scanf("%c",&alphabet);
    if (alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
    {
        printf("vowel");
    }else{
        printf("consonant");
    }
    
    return 0;
}
