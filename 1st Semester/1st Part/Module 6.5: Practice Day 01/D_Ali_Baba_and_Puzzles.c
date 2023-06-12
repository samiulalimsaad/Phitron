#include <stdio.h>

int main() {
    long long a, b, c, d;
    int f = 0;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if (a + b * c == d) {
        ++f;
    }
    if (a + b - c == d) {
        ++f;
    }
    if (a - b * c == d) {
        ++f;
    }
    if (a * b - c == d) {
        ++f;
    }
    if (a * b + c == d) {
        ++f;
    }
    if (a - b + c == d) {
        ++f;
    }


    if (f > 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }


    return 0;
}
