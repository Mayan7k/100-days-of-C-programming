//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){
int n;
  scanf("%d",&n);
  if(n>=0){
    if(n>0){
      printf(" positive");
    }else{
      printf("zero");
    }
    
  }
else{
  printf("negative");
}
  
}
