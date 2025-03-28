#include <stdio.h>

int collatz_length(int n) {
    if (n == 1) return 1;
    if (n % 2 == 0)
        return 1 + collatz_length(n / 2);
    else
        return 1 + collatz_length(3 * n + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", collatz_length(n));
    return 0;
}
