/*
1  2  3  4  5   6  7  8  9  10
36 37 38 39 40  41 42 43 44 11
35 64 65 66 67  68 69 70 45 12
34 63 84 85 86  87 88 71 46 13
33 62 83 96 97  98 89 72 47 14
32 61 82 95 100 99 90 73 48 15
31 60 81 94 93  92 91 74 49 16
30 59 80 79 78  77 76 75 50 17
29 58 57 56 55  54 53 52 51 18
28 27 26 25 24  23 22 21 20 19
*/

#include <stdio.h>

int main() {
    int n = 10;
    int matrix[n][n];
    int i, j, k, l;
    int num = 1;
    int minRow = 0, minCol = 0, maxRow = n - 1, maxCol = n - 1;

    while (num <= n * n) {
        for (i = minCol; i <= maxCol; i++) {
            matrix[minRow][i] = num++;
        }
        minRow++;

        for (j = minRow; j <= maxRow; j++) {
            matrix[j][maxCol] = num++;
        }
        maxCol--;

        for (k = maxCol; k >= minCol; k--) {
            matrix[maxRow][k] = num++;
        }
        maxRow--;

        for (l = maxRow; l >= minRow; l--) {
            matrix[l][minCol] = num++;
        }
        minCol++;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
