//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main(){
        int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
if (a>b)
{
    if (a>c)
    {
        printf("a is largest");
    }else{
        printf("c is largest");
    }
    
}else{
    if (b>c)
    {
        printf("b is largest");
    }else{
        printf("c is largest");
    }
}
    return 0;
}
