#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][i] != 1 || (i != j && matrix[i][j] != 0)) {
                printf("NO\n");
                return 0;
            }

        }
    }

    printf("YES\n");


    return 0;
}
