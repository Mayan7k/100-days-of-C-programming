/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
  #include <stdio.h>

int main(){
    int days,fine;
    scanf("%d",&days);
    if (days<=5)
    {
        printf("%d",fine = 2*days);
    }else if ( days<=10)
    {
       printf("%d",fine = 10+(4*(days-5)));
    }else if ( days<=30)
    {
         printf("%d",fine = 10+20+(6*(days-10)));
    }else {
    printf("membership cancelled");
    }
    
    
    return 0;
}
