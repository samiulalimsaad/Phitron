#include <stdio.h>

int main() {

    int r, c;

    scanf("%d %d", &r, &c);

    int matrix[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < c; i++) {
        printf("%d ", matrix[r - 1][i]);
    }

    printf("\n");

    for (int i = 0; i < r; i++) {
        printf("%d ", matrix[i][c - 1]);
    }


    return 0;
}
