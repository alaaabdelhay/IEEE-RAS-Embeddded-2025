#include <stdio.h>

void sortArray(int *arr, int size, int order) {
    int *ptr1, *ptr2, temp;
    for (ptr1 = arr; ptr1 < arr + size - 1; ptr1++) {
        for (ptr2 = ptr1 + 1; ptr2 < arr + size; ptr2++) {
            if (order == 1) {
                if (*ptr1 > *ptr2) {
                    temp = *ptr1;
                    *ptr1 = *ptr2;
                    *ptr2 = temp;
                }
            } else {
                if (*ptr1 < *ptr2) {
                    temp = *ptr1;
                    *ptr1 = *ptr2;
                    *ptr2 = temp;
                }
            }
        }
    }
}

void printArray(int *arr, int size) {
    for (int *ptr = arr; ptr < arr + size; ptr++) {
        printf("%d", *ptr);
        if (ptr < arr + size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int arr[100];
    int size = 0;

    printf("Array elements: ");

    while (scanf("%d", &arr[size]) == 1) {
        size++;
        char ch = getchar();
        if (ch == '\n') {
            break;
        }
    }

    printf("Array in ascending order: ");
    sortArray(arr, size, 1);
    printArray(arr, size);

    printf("Array in descending order: ");
    sortArray(arr, size, 0);
    printArray(arr, size);

    return 0;
}
