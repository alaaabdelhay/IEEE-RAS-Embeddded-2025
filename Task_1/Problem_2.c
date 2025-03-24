#include <stdio.h>

int main() {
    int N, years, months, days;

    // Read input
    scanf("%d", &N);

    // Calculate years, months, and days
    years = N / 365;
    N %= 365; // Remaining days after extracting years
    months = N / 30;
    days = N % 30;

    // Print the result
    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);

    return 0;
}
