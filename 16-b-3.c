//Read a matrix and print diagonal elements and its sum.
#include <stdio.h>

void main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("The matrix should be square (same number of rows and columns).\n");
        return 1;
    }

    int matrix[rows][cols],i,j;

    printf("Enter the elements of the matrix:\n");
    int diagonalSum = 0;

    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                diagonalSum += matrix[i][j];
            }
        }
    }

    printf("Diagonal elements: ");
    for (i = 0; i < rows; i++) {
        printf("%d ", matrix[i][i]);
    }

    printf("\nSum of diagonal elements: %d\n", diagonalSum);
}

