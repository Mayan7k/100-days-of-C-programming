//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h> 

int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c );
   int D = (b*b)-(4*a*c);
   int n1= (-b-sqrt(D))/(2*a);
  int n2=(-b+sqrt(D))/(2*a);
  if (D>=0)
  {
    if (D>0)
    {
      printf("Roots are real and different: %d %d",n1,n2);
    }else
    {
      printf("Roots are real and same: %d %d", n1,n2);
    }
    
  }else{
    printf("Roots are complex");
  }
  
  return 0;
}
