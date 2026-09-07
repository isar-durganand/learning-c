//WAP to create a calculator using if-then-else statement for two values for basic arithmetic operations
#include <stdio.h>
int main() {
    char op;
    float a, b, c;
    printf("Enter the first & second number: ");
    scanf("%f %f", &a, &b);
    printf("Enter the operation you want to perform (+, -, *, /): ");
    scanf(" %c", &op);
    if (op == '+'){
        c = a + b;
    }else if (op == '-'){
        c = a - b;
    }else if (op == '*'){
        c = a * b;
    }else if (op == '/'){
        if (b != 0){
            c = a / b;
        }
        else{
            printf("Division by zero is not allowed.\n");
            return 0;
        }
    }else{
        printf("Invalid operator!\n");
        return 0;
    }
    printf("%.2f %c %.2f = %.2f\n", a, op, b, c);
    return 0;
}