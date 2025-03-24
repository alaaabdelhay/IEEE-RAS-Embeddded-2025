#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int N, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }

    if (isPrime(sum))
        printf("The sum of digits (%d) is a prime number.\n", sum);
    else
        printf("The sum of digits (%d) is not a prime number.\n", sum);

    return 0;
}
