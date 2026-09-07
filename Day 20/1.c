//Write a program to find the product of odd digits of a number
#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int product=1;
  for (  ;n!=0; n=n/10)
  {
    int ld=n%10;
    if (ld%2==1)
    {
      product=product*ld;
    }
    
  }
  printf("%d",product);
  return 0;
}
