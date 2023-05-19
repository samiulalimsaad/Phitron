#include <stdio.h>

int main() {

    int n, t = 0, p = 0;

    scanf("%d", &n);

    while (n > 0) {
        long long int a, b;

        scanf("%lld %lld", &a, &b);

        if (a > b) {
            t++;
        }
        else if (a < b) {
            p++;
        }
        --n;
    }

    if (t == p) {
        printf("Draw\n");
    }
    else if (t > p) {
        printf("Tiger\n");
    }
    else {
        printf("Pathan\n");
    }


    return 0;
}
