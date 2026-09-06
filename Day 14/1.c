//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    for (int i = 1; i <=2*n-1; i=i+2)
    {
       sum = sum+i;
    }printf("%d",sum);
    
    return 0;
}   
