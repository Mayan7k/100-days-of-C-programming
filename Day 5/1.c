//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
#include <math.h>

int main(){
     int principal,rate,time;
     float CI,SI;
     scanf("%d %d %d",&principal,&rate,&time);
CI = principal * pow(1 + rate / 100.0, time) - principal;
SI= (principal*rate*time)/100.0;
    printf("Simple Interest= %.2f ,  Compound Interest= %.1f",SI,CI);
    return 0;
}
