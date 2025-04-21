#include <stdio.h>

void print_even_numbers(int num) {
    for (int i = 0; i <= num; i++) {
        if (i % 2 == 0) {
            printf("%d", i);
        }
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    print_even_numbers(num);
    return 0;
}
