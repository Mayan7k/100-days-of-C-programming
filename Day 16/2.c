//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int originalNum=n;
    int revNum=0;
    for (; n!=0; n=n/10)
    {
        int ld= n%10;
        revNum=(revNum*10)+ld ;
    } 
    if (revNum==originalNum)
    {
        printf("it is a palindrome");
    }else
    {
        printf("it is not a palindrome");
    }
    
    
    
    return 0;
}
