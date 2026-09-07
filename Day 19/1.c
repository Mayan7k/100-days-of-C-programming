//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main()
{
    int n1,n2;
    scanf("%d %d", &n1,&n2); 
      int product=(n1*n2);
   while (n2 >0)
    {    
 int rem= n1%n2;
        n1=n2;
        n2=rem; 
  }
int LCM = product/n1 ;
  printf("the LCM IS %d",LCM);
    return 0;
}
