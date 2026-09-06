//Write a program to reverse a given number.
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int revNum=0;
    for (; n!=0; n = n/10){
       int ld=n%10;
       revNum=(revNum*10)+ld;
    }
    printf("%d",revNum);
    return 0;
}
