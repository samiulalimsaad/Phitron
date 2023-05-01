#include <stdio.h>

int main() {

    int n, s, start = 0, end;

    scanf("%d", &n);
    s = n;
    for (int i = 0; i < n * 2; i++) {
        if (i < n) {
            end = i * 2 + 1;
            --s;
        }
        else {
            end = (((2 * n) - i) * 2 + 1) - 2;
            ++s;
        }
        if (i == n) {
            s = 0;
        }


        for (int j = 0; j < s; j++) {
            printf(" ");
        }
        for (int j = start; j < end; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
