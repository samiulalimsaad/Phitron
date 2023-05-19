#include <stdio.h>

int main() {

    int n, a = 1;

    scanf("%d", &n);

    while (n > 0) {
        printf("%d %d %d PUM\n", a, a + 1, a + 2);
        a += 4;
        --n;
    }

    return 0;
}
