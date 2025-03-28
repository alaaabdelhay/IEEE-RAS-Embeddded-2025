#include <stdio.h>

void checkDivisibility(int a, int b) {
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
        return;
    }
    if (a % b == 0) {
        printf("%d is divisible by %d\n", a, b);
    } else {
        printf("%d is not divisible by %d\n", a, b);
    }
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    checkDivisibility(num1, num2);
    return 0;
}
