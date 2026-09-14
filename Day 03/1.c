//Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>

int main(){
    int fahr;
    int cel;
    scanf("%d",&cel);
    fahr=((9.0/5)*cel)+ 32;
    printf("fahrenhiet= %.2d",fahr);

    return 0;
}
