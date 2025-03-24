#include <stdio.h>

int main() {
    int A, B, C, D, result;
    scanf("%d %d %d %d", &A, &B, &C, &D);


    result = 1;
    result = (result * (A % 100)) % 100;
    result = (result * (B % 100)) % 100;
    result = (result * (C % 100)) % 100;
    result = (result * (D % 100)) % 100;

    printf("%02d\n", result);

    return 0;
}
