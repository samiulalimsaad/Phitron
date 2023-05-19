#include <stdio.h>

int abs(int a) {
    if (a < 0) {
        return -a;
    }
    return a;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", abs(a));

    return 0;
}
