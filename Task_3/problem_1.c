#include <stdio.h>

int main() {
    int N, X, i, found = -1;
    scanf("%d", &N);

    int A[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &X);

    for (i = 0; i < N; i++) {
        if (A[i] == X) {
            found = i;
            break;
        }
    }

    printf("%d\n", found);
    return 0;
}
