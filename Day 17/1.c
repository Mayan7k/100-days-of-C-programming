//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main(){
  int n,ld;
  scanf("%d",&n);
  int original =n;
  int sum=0;
  for ( ; n!=0; n=n/10)
  {
     ld=n%10;
     sum=sum + (ld)*(ld)*(ld);
  } if (original==sum)
  {
    printf("the number is armstrong number");
  }else {
    printf("the number is not an armstrong number");
  }
  
  
  return 0;
}
