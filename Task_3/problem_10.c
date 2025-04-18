#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    int square[n][n];
    printf("Enter the elements of the square:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &square[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += square[0][i];
    }

    for (int i = 1; i < n; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += square[i][j];
        }
        if (row_sum != sum) {
            printf("The square is not a magic square\n");
            return 0;
        }
    }

    for (int j = 0; j < n; j++) {
        int col_sum = 0;
        for (int i = 0; i < n; i++) {
            col_sum += square[i][j];
        }
        if (col_sum != sum) {
            printf("The square is not a magic square\n");
            return 0;
        }
    }

    int diag1_sum = 0;
    for (int i = 0; i < n; i++) {
        diag1_sum += square[i][i];
    }
    if (diag1_sum != sum) {
        printf("The square is not a magic square\n");
        return 0;
    }

    int diag2_sum = 0;
    for (int i = 0; i < n; i++) {
        diag2_sum += square[i][n - 1 - i];
    }
    if (diag2_sum != sum) {
        printf("The square is not a magic square\n");
        return 0;
    }

    printf("The square is a magic square\n");
    return 0;
}
