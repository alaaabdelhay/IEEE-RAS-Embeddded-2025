#include <stdio.h>

#define ADD(x, y) ((x) + (y))
#define SUB(x, y) ((x) - (y))

int main() {
    int a, b, choice;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Choose operation (1 for Add, 2 for Subtract): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result: %d\n", ADD(a, b));
            break;
        case 2:
            printf("Result: %d\n", SUB(a, b));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
