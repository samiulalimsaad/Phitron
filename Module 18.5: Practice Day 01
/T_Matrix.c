#include<stdio.h>
#include<math.h>

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
            }
            printf("%d %d\n", j, a(j - i));
            if (j - i == j) {
                rd += arr[i][j];
            }

        }
    }

    printf("%d %d\n", ld, rd);

    return 0;
}
