#include<stdio.h>
#include <stdlib.h>

int main() {
    int n, ld = 0, rd = 0;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                ld += arr[i][j];
                rd += arr[i][n - i - 1];
            }
        }
    }

    printf("%d\n", abs(ld - rd));

    return 0;
}
