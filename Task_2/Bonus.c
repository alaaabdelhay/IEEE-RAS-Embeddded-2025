#include <stdio.h>

int canReach(long long current, long long target) {
    if (current > target) return 0;
    if (current == target) return 1;
    return canReach(current * 10, target) || canReach(current * 20, target);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);
        printf(canReach(1, N) ? "YES\n" : "NO\n");
    }
    return 0;
}
