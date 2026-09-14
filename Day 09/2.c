//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
#include <stdio.h>

int main(){
  int grade;
  scanf("%d",&grade);
if (grade>=90)
{printf("Grade A ");
}else if(grade>=80){
  printf("Grade B ");
}else if(grade >=70){
  printf("Grade C");
}else if (grade>=60)
{
  printf("Grade d ");
}else{
  printf("Grade F ");
}


  
  return 0;
}
