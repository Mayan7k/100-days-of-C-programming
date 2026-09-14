//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int n1, n2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    
    while (n2 > 0) {
        int rem = n1 % n2; 
        n1 = n2;          
        n2 = rem;         
    }

    
    printf("The HCF is %d\n", n1); 
    
    return 0;
}
