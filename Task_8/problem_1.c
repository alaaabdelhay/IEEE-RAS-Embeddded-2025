#include <stdio.h>

#define SIZE 5
//define ASCENDING

int* sortAscending() {
    static int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

int* sortDescending() {
    static int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

int main() {
    int *result;

    #ifdef ASCENDING
        result = sortAscending();
    #else
        result = sortDescending();
    #endif

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
