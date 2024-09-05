#include <stdio.h>

int main() {
    int n = 5; // Size of the pattern
    int matrix[n][n];
    int i;
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = n - 1;
    int num = 1;

    while (row_start <= row_end && col_start <= col_end) {
        // Top row
        for (int i = col_start; i <= col_end; i++) {
            matrix[row_start][i] = num++;
        }
        row_start++;

        // Right column
        for (int i = row_start; i <= row_end; i++) {
            matrix[i][col_end] = num++;
        }
        col_end--;

        // Bottom row
        for (int i = col_end; i >= col_start; i--) {
            matrix[row_end][i] = num++;
        }
        row_end--;

        // Left column
        for (int i = row_end; i >= row_start; i--) {
            matrix[i][col_start] = num++;
        }
        col_start++;
    }

    // Printing the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%-4d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

