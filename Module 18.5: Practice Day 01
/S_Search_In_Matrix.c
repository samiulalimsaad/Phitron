#include<stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    long int arr[m][n], check;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%ld", &arr[i][j]);
        }
    }
    scanf("%ld", &check);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == check) {
                printf("will not take number\n");
                return 0;
            }
        }
    }

    printf("will take number\n");


    return 0;
}
