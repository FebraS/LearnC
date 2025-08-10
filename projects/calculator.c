#include <stdio.h>

int main() {
    char operator = '\0';
    double firstNumber = 0.0;
    double secondNumber = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &firstNumber);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &secondNumber);

    switch (operator) {
        case '+':
            result = firstNumber + secondNumber;
            printf("%.2lf + %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;
        case '-':
            result = firstNumber - secondNumber;
            printf("%.2lf - %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;
        case '*':
            result = firstNumber * secondNumber;
            printf("%.2lf * %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;
        case '/':
            if (secondNumber == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Exit the program because this is a fatal error
            }
            result = firstNumber / secondNumber;
            printf("%.2lf / %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 1; // Exit the program because the operator is not valid
    }
    
    return 0;
}
