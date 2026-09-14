//Write a program to check if a number is a strong  number.
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
   int org=n;
     int sum=0;
    for(;n!=0;n=n/10){
        int ld=n%10;
        int fact=1;
for(int i=1;i<=ld;i++){
    fact=fact*i; 
   }
   sum=sum+fact;
    }
    if(org==sum)
   printf("the number is a strong number ");
   else
   printf("the number is not a strong number ");
    return 0;
}
