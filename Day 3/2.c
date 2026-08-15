//Q6: Write a program to swap two numbers using a third variable.


#include <stdio.h>

int main(){
    int a, b,c;
    scanf("%d %d",&a,&b);
    c=a; //a is stored in c 
    a=b;//b is now stored in a 
    b=c;//since c= a . a is stored in b 
printf("%d %d",a,b);
    return 0;
}
