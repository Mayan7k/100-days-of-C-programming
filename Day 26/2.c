/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>

int main() {
    int n = 5; 

    
    for (int i = 1; i <= 3; i++) {
        int stars = 2 * i - 1; 
        
        for (int j = 1; j <= stars; j++) {
            printf("*\n");
        }
        printf("\n"); 
    }

    
    for (int i = 2; i >= 1; i--) {
        int stars = 2 * i - 1; 
        
        for (int j = 1; j <= stars; j++) {
            printf("*\n");
        }
        printf("\n"); 
    }

    return 0;
}

