#include <stdio.h>

int main() {

    int a, b, c, flag = 0;
    scanf("%d %d", &a, &b);

    c = b - a;

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0 || i % 3 == 0) {
            flag = 1;
        }
        else {
            flag = 0;
        }
    }
    if (flag == 0) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }

    return 0;
}
