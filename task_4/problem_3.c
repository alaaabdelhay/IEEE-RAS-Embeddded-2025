#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    swap(&a, &b);

    printf("\nAfter swapping:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}
