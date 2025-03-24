#include <stdio.h>

int main() {
    int i, max, min;

    printf("Enter the number (-1 to stop): ");
    scanf("%d", &i);

    if (i == -1) {
        printf("No valid numbers entered.\n");
        return 0;
    }

    max = min = i;

    while (1) {
        printf("Enter the number (-1 to stop): ");
        scanf("%d", &i);

        if (i == -1)
            break;

        if (i > max)
            max = i;

        if (i < min)
            min = i;
    }

    printf("Max: %d\nMin: %d\n", max, min);

    return 0;
}

