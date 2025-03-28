#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_odd(int n) {
    return n % 2 == 1;
}

bool is_binary_palindrome(int n) {
    char binary[32];
    int index = 0;

    while (n > 0) {
        binary[index++] = (n % 2) + '0';
        n /= 2;
    }
    binary[index] = '\0';

    for (int i = 0; i < index / 2; i++) {
        if (binary[i] != binary[index - i - 1])
            return false;
    }

    return true;
}

int main() {
    int N;
    scanf("%d", &N);

    if (is_odd(N) && is_binary_palindrome(N))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
