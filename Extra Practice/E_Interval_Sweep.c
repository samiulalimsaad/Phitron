#include <stdio.h>

int main() {

    int a, b, c;
    scanf("%d %d", &a, &b);

    c = b - a;

    if (c % 2 == 0 || c % 3 == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
