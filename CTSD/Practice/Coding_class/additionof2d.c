#include <stdio.h>
#include <stdbool.h>

bool is_duplicate(int sum[][50], int value, int current_row, int current_col, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i < current_row) || (i == current_row && j < current_col)) {
                if (sum[i][j] == value) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int row, col;
    printf("Enter row, column: ");
    scanf("%d %d", &row, &col);

    int a[row][col], b[row][col], sum[row][col];

    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for matrix B:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Duplicate values:\n");
    bool dup_found = false;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (is_duplicate(sum, sum[i][j], i, j, row, col)) {
                printf("Duplicate found: %d at position (%d, %d)\n", sum[i][j], i, j);
                dup_found = true;
            }
        }
    }

    if (!dup_found) {
        printf("No duplicates found in the sum matrix.\n");
    }

    return 0;
}
