
#include <stdio.h>

int main() {

    int n, s, start = 0, end;

    scanf("%d", &n);
    s = n - 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < s; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("%d", i);
        }
        --s;
        printf("\n");
    }
    return 0;
}
