#include <stdio.h>
#include <math.h>

typedef struct {
    int num1;
    int num2;
} MathPair;

int add(MathPair pair) {
    return pair.num1 + pair.num2;
}

int subtract(MathPair pair) {
    return pair.num1 - pair.num2;
}

int multiply(MathPair pair) {
    return pair.num1 * pair.num2;
}

double divide(MathPair pair) {
    if (pair.num2 == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return (double)pair.num1 / pair.num2;
}

int exponentiate(MathPair pair) {
    return (int)pow(pair.num1, pair.num2);
}

int main() {
    MathPair pair;


    printf("Enter first number: ");
    scanf("%d", &pair.num1);

    printf("Enter second number: ");
    scanf("%d", &pair.num2);

    printf("\nUsing structure-based approach:\n");
    printf("Addition: %d\n", add(pair));
    printf("Subtraction: %d\n", subtract(pair));
    printf("Multiplication: %d\n", multiply(pair));
    printf("Division: %.2f\n", divide(pair));
    printf("Exponentiation: %d\n", exponentiate(pair));

    printf("\nUsing standard parameter approach:\n");
    printf("Addition: %d\n", add(pair));
    printf("Subtraction: %d\n", subtract(pair));
    printf("Multiplication: %d\n", multiply(pair));
    printf("Division: %.2f\n", divide(pair));
    printf("Exponentiation: %d\n", exponentiate(pair));

    return 0;
}
