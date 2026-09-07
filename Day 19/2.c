//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main(){
  int n;
  int sum=0;
  scanf("%d",&n);
  for (; n!=0; n=n/10)
  {
    int ld=n%10;
    sum=sum+ld;
  }
  printf("%d",sum);
  return 0;
}
