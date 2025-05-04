#include <stdio.h>

enum Operation {
    ADD = 43,
    SUB = 45,
    MUL = 42,
    DIV = 47,
    AND = 38,
    OR = 124,
    NOT = 33
};

float calculate(float operand1, float operand2, char op) {
    switch (op) {
        case ADD:
            return operand1 + operand2;
        case SUB:
            return operand1 - operand2;
        case MUL:
            return operand1 * operand2;
        case DIV:
            if (operand2 != 0) {
                return operand1 / operand2;
            } else {
                printf("Error: Division by zero\n");
                return 0;
            }
        case AND:
            return (int)operand1 & (int)operand2;
        case OR:
            return (int)operand1 | (int)operand2;
        case NOT:
            return !operand1;
        default:
            printf("Invalid operation\n");
            return 0;
    }
}

int main() {
    float operand1, operand2, result;
    char operation;

    printf("Enter first operand: ");
    scanf("%f", &operand1);
    printf("Enter second operand: ");
    scanf("%f", &operand2);
    printf("Enter operation (+, -, *, /, &, |, !): ");
    scanf(" %c", &operation);

    result = calculate(operand1, operand2, operation);

    printf("Result: %.2f\n", result);

    return 0;
}

