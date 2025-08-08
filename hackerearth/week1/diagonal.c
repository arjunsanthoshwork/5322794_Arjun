#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int d1 = 0, d2 = 0;
    for (int i = 0; i < arr_rows; i++) {
        d1 += arr[i][i];                 
        d2 += arr[i][arr_columns - 1 - i];  
    }
    return abs(d1 - d2);
}

int main() {
    int n = 3;
    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int diff = diagonalDifference(n, n, matrix);
    printf("%d\n", diff);

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
