//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main()
{
    int n1,n2;

    scanf("%d %d", &n1,&n2); 
   while (n2 >0)
    {
     
      if (n1/n2 !=0)
      { int rem= n1%n2;
        n1=n2;
        n2=rem;
        
      
    }
     
  }
printf("the hcf is %d",n2);
  
    return 0;
}
