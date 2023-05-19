#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    while (n > 0) {

        long int a, b;

        scanf("%ld %ld", &a, &b);

        if (a == b) {
            printf("Square\n");
        }
        else {
            printf("Rectangle\n");
        }
        --n;
    }

    return 0;
}
