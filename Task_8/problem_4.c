#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr_malloc, *ptr_calloc, *ptr_realloc, *ptr_new;
    int size_malloc = 5, size_calloc = 5, size_realloc = 5, size_new = 10;

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

    // Free ptr_realloc and allocate a larger memory block (ptr_new)
    free(ptr_realloc);
    ptr_new = (int *)malloc(size_new * sizeof(int));
    if (ptr_new == NULL) {
        printf("Memory allocation for new space failed!\n");
        free(ptr_malloc);
        free(ptr_calloc);
        return 1;
    }
    for (int i = 0; i < size_new; i++) {
        ptr_new[i] = (i + 1) * 1000;
    }

    printf("\nValues assigned to ptr_malloc (using malloc):\n");
    for (int i = 0; i < size_malloc; i++) {
        printf("%d ", ptr_malloc[i]);
    }

    printf("\nValues assigned to ptr_calloc (using calloc):\n");
    for (int i = 0; i < size_calloc; i++) {
        printf("%d ", ptr_calloc[i]);
    }

    printf("\nValues assigned to ptr_new (new larger space):\n");
    for (int i = 0; i < size_new; i++) {
        printf("%d ", ptr_new[i]);
    }

    free(ptr_malloc);
    free(ptr_calloc);
    free(ptr_new);

    return 0;
}
