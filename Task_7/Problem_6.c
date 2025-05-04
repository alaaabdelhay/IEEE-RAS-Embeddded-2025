#include <stdio.h>

union Data {
    int a;
    float b;
    char c[20];
};

int main() {
    union Data data;

    data.a = 10;
    printf("After assigning value to a (int):\n");
    printf("a = %d, b = %.2f, c = %s\n", data.a, data.b, data.c);

    data.b = 3.14f;
    printf("\nAfter assigning value to b (float):\n");
    printf("a = %d, b = %.2f, c = %s\n", data.a, data.b, data.c);

    snprintf(data.c, sizeof(data.c), "Hello, World!");
    printf("\nAfter assigning value to c (char[]):\n");
    printf("a = %d, b = %.2f, c = %s\n", data.a, data.b, data.c);

    return 0;
}
