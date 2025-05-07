#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr_malloc, *ptr_calloc, *ptr_realloc;
    int size_malloc = 5, size_calloc = 5, size_realloc = 5;

    ptr_malloc = (int *)malloc(size_malloc * sizeof(int));
    if (ptr_malloc == NULL) {
        printf("Memory allocation using malloc failed!\n");
        return 1;
    }
    for (int i = 0; i < size_malloc; i++) {
        ptr_malloc[i] = i + 1;
    }

    ptr_calloc = (int *)calloc(size_calloc, sizeof(int));
    if (ptr_calloc == NULL) {
        printf("Memory allocation using calloc failed!\n");
        free(ptr_malloc);
        return 1;
    }
    for (int i = 0; i < size_calloc; i++) {
        ptr_calloc[i] = (i + 1) * 10;
    }

    ptr_realloc = (int *)malloc(size_realloc * sizeof(int));
    if (ptr_realloc == NULL) {
        printf("Initial memory allocation using malloc failed!\n");
        free(ptr_malloc);
        free(ptr_calloc);
        return 1;
    }
    for (int i = 0; i < size_realloc; i++) {
        ptr_realloc[i] = (i + 1) * 100;
    }

    size_realloc = 8;
    ptr_realloc = (int *)realloc(ptr_realloc, size_realloc * sizeof(int));
    if (ptr_realloc == NULL) {
        printf("Memory reallocation using realloc failed!\n");
        free(ptr_malloc);
        free(ptr_calloc);
        return 1;
    }
    for (int i = 5; i < size_realloc; i++) {
        ptr_realloc[i] = (i + 1) * 100;
    }

    printf("\nValues assigned to ptr_malloc (using malloc):\n");
    for (int i = 0; i < size_malloc; i++) {
        printf("%d ", ptr_malloc[i]);
    }

    printf("\nValues assigned to ptr_calloc (using calloc):\n");
    for (int i = 0; i < size_calloc; i++) {
        printf("%d ", ptr_calloc[i]);
    }

    printf("\nValues assigned to ptr_realloc (using realloc):\n");
    for (int i = 0; i < size_realloc; i++) {
        printf("%d ", ptr_realloc[i]);
    }

    free(ptr_malloc);
    free(ptr_calloc);
    free(ptr_realloc);

    return 0;
}
