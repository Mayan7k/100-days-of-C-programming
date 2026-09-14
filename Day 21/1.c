//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main(){
    int n;
    int fd;
    int ld;
    scanf("%d",&n);
   ld=n%10;
   int n1=n/1000;
   int n2=(n%1000)/10;
   int new=ld*1000 + n2*10 + n1 ;
   printf("new= %d ", new);
    return 0;
}
