#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    int space = n - 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < space; j++) {
            printf(" ");
        }

        if (i % 2 == 0) {
            for (int j = 0; j < (i * 2) + 1; j++) {
                printf("^");
            }
        }
        else {
            for (int j = 0; j < (i * 2) + 1; j++) {
                printf("*");
            }
        }

        printf("\n");
        space--;

    }


    return 0;
}
