//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


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
