#include <stdio.h>

int main() {
    int n;
    long int a, b, c, d;
    long long s;


    scanf("%d", &n);

    while (n > 0) {

        scanf("%lld %ld %ld %ld", &s, &a, &b, &c);

        d = s - (a + b + c);

        printf("%ld\n", d);
        --n;
    }


    return 0;
}
