
#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    scanf("%d %d %c", &num1, &num2, &op); 

    
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
            
        case '/':
           
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = num1 / num2;
                printf("%d\n", result);
            }
            break;
            
        case '%':
            if (num2 == 0) {
                printf("Error: Modulo by zero\n");
            } else {
                result = num1 % num2;
                printf("%d\n", result);
            }
            break;
            
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}
