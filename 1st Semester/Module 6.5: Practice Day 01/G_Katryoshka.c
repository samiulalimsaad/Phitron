#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0) {
        printf("0");
    }
    else if (a == 1 || b == 1 || c == 1) {
        printf("1");
    }
    else {
        if (a < b && a < c) {
            printf("%d", a);
        }
        else if (b < a && b < c) {
            a = a - b;
            c = c - b;

            if ((a / 2) < c) {
                printf("%d", (a / 2) + b);
            }
            else {
                printf("%d", c + b);
            }

        }
        else if (c < a && c < b) {
            printf("%d", c);
        }
    }
    return 0;
}
