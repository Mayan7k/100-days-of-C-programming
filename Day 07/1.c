//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
   if (n%400==0 ||( n%4==0 && n%100!=0))
   {
   printf("leap yr");
   }else{
    printf("not a leap yr");
   }
   
    return 0;
}
