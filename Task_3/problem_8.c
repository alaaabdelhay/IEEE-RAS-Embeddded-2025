#include <stdio.h>
#include <ctype.h>

int main() {
    char S[1000001];
    fgets(S, sizeof(S), stdin);

    int count = 0;
    int i = 0;

    while (S[i] != '\0') {
        if (isalpha(S[i])) {
            count++;
            while (isalpha(S[i])) {
                i++;
            }
        } else {
            i++;
        }
    }

    printf("%d\n", count);
    return 0;
}
