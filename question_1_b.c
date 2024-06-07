#include <stdio.h>

#define SIZE 12

void initializeMatrix(int mat[SIZE][SIZE]) {
    int i, j;
    int level = 1;
    int maxLevel = 4;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            mat[i][j] = 0;
        }
    }
for (level = 1; level <= maxLevel; level++) {
        for (i = level - 1; i < SIZE - (level - 1); i++) {
            for (j = level - 1; j < SIZE - (level - 1); j++) {
                if (i < level || i >= SIZE - level || j < level || j >= SIZE - level) {
                    mat[i][j] = level;
                }
            }
        }
    }
}

void printMatrix(int mat[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE];

    initializeMatrix(matrix);

    printf("Generated Matrix:\n");
    printMatrix(matrix);

    return 0;
}
