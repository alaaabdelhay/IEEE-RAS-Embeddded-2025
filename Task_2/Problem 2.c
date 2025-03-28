#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    double result = 0.0;

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (int)result == num;
}

void printArmstrongNumbers(int lower, int upper) {
    printf("Armstrong numbers between %d to %d are: ", lower, upper);

    int found = 0;
    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d, ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\b\b \n");
}

void demonstrateArmstrongExample(int num) {
    int originalNum = num, remainder, n = 0;
    double result = 0.0;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    printf("\nExample for Armstrong Number (%d):\n", num);
    printf("Digits raised to the power of %d: ", n);

    while (originalNum != 0) {
        remainder = originalNum % 10;
        printf("%d^%d ", remainder, n);
        if (originalNum / 10 != 0) {
            printf("+ ");
        }
        result += pow(remainder, n);
        originalNum /= 10;
    }

    printf("= %.0f\n", result);
}

int main() {
    int lower, upper;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printArmstrongNumbers(lower, upper);

    demonstrateArmstrongExample(153);

    return 0;
}
