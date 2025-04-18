#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int min = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == min) {
            count++;
        }
    }

    if (count % 2 == 1) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }

    return 0;
}
