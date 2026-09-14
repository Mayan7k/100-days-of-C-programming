/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>

int main() {
    int n = 5; 

    
    for (int i = 1; i <= 4; i++) {
      for (int space = 3; space>=i; space--)
      { 
        printf(" ",space);
      }
      
        int stars = 2 * i - 1; 
        
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n"); 
    }

    
    for (int i = 3; i >= 1; i--) {
      for (int space = 1; space <=4-i; space++)
      { 
        printf(" ",space);
      }
      
        int stars = 2 * i - 1; 
        
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}

