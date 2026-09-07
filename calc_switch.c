// WAP to create a calculator using switch case for two values for basic arithmetic operations

#include <stdio.h>

int main() {
    char op;
    float a, b, c;

    printf("Enter the first & second number: ");
    scanf("%f %f", &a, &b);

    printf("Enter the operation you want to perform (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            c = a + b;
            printf("%.2f %c %.2f = %.2f\n", a, op, b, c);
            break;

        case '-':
            c = a - b;
            printf("%.2f %c %.2f = %.2f\n", a, op, b, c);
            break;

        case '*':
            c = a * b;
            printf("%.2f %c %.2f = %.2f\n", a, op, b, c);
            break;

        case '/':
            if (b != 0) {
                c = a / b;
                printf("%.2f %c %.2f = %.2f\n", a, op, b, c);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}