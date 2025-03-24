#include <stdio.h>

int main() {
    int N, i = 1, sum = 0;
    printf("Enter a positive number: ");
    scanf("%d", &N);

    while (i < N) {
        if (N % i == 0)
            sum += i;
        i++;
    }

    if (sum == N)
        printf("%d is a perfect number\n", N);
    else
        printf("%d is not a perfect number\n", N);

    return 0;
}
