#include <stdio.h>

void multiplyMatrices(int *A, int *B, int *C, int rowsA, int colsA, int rowsB, int colsB) {
    if (colsA != rowsB) {
        printf("Matrix multiplication not possible\n");
        return;
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            int sum = 0;
            for (int k = 0; k < colsA; k++) {
                sum += *((A + i * colsA) + k) * *((B + k * colsB) + j);
            }
            *((C + i * colsB) + j) = sum;
        }
    }
}

void printMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *((matrix + i * cols) + j));
        }
        printf("\n");
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows and columns for the first matrix:\n");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter the number of rows and columns for the second matrix:\n");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible with these dimensions.\n");
        return 0;
    }

    int A[rowsA][colsA], B[rowsB][colsB], C[rowsA][colsB];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    multiplyMatrices((int *)A, (int *)B, (int *)C, rowsA, colsA, rowsB, colsB);

    printf("Product of matrices is:\n");
    printMatrix((int *)C, rowsA, colsB);

    return 0;
}
