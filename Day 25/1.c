/*Write a program to print the following pattern:
5
45
345
2345
12345 */
#include <stdio.h>

int main(){
  int n=5;
  for (int i = 5; i > 0; i--)
  {
    for (int j = i; j<=n; j++)
    { 
      printf("%d",j);
    }
    printf("\n");
  }
  

  return 0;
}
