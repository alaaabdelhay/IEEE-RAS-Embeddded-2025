#include <stdio.h>

void printNumbers(int current, int N) {
    if (current > N)
        return;
    printf("%d\n", current);
    printNumbers(current + 1, N);
}

int main() {
    int N;
    scanf("%d", &N);
    printNumbers(1, N);
    return 0;
}
