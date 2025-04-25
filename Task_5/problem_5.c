#include <stdio.h>

void getOddNumbers(int *arr, int size, int *oddNumbers, int *oddCount) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            oddNumbers[count] = arr[i];
            count++;
        }
    }

    *oddCount = count;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int oddNumbers[size];
    int oddCount = 0;

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    getOddNumbers(arr, size, oddNumbers, &oddCount);

    printf("Odd numbers are: ");
    printArray(oddNumbers, oddCount);

    printf("Total odd numbers: %d\n", oddCount);

    return 0;
}
