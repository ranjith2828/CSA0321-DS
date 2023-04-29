#include <stdio.h>

int main() {
    int m1[10][10], m2[10][10], result[10][10];
    int row1, col1, row2, col2, i, j, k;

    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d%d", &row1, &col1);

    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d%d", &row2, &col2);

    if (col1 != row2) {
        printf("Error: Column of first matrix and row of second matrix should be same\n");
        return 0;
    }

    printf("Enter the elements of matrix 2:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    // Initialize result matrix with 0
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices and store the result in result matrix
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            for (k = 0; k < col1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("Resultant matrix is:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
