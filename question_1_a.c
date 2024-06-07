#include <stdio.h>

void addMatrices(int A[3][3], int B[3][3], int result[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void printMatrix(int mat[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];

    addMatrices(A, B, C);

    printf("Matrix 1:\n");
    printMatrix(A);

    printf("\nMatrix 2:\n");
    printMatrix(B);

    printf("\nResultant Matrix:\n");
    printMatrix(C);

    return 0;
}
