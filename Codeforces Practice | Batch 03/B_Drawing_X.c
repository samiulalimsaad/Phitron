#include <stdio.h>

int main() {

    int n, f = 0;

    scanf("%d", &n);
    f = n - 1;
    int m = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && f == m && i == m) {
                printf("X");
            }
            else if (i == j) {
                printf("\\");
            }
            else if (f == j) {
                printf("/");
            }

            else {
                printf("*");
            }
        }
        --f;
        printf("\n");
    }


    return 0;
}
