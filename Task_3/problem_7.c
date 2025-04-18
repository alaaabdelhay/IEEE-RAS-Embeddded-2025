#include <stdio.h>

int max_subsequence_length(int N, char S[]) {
    char prev_char = '\0';
    int subsequence_length = 0;

    for (int i = 0; i < N; i++) {
        if (S[i] != prev_char) {
            subsequence_length++;
            prev_char = S[i];
        }
    }

    return subsequence_length;
}

int main() {
    int N;
    scanf("%d", &N);
    char S[N + 1];
    scanf("%s", S);

    printf("%d\n", max_subsequence_length(N, S));

    return 0;
}
