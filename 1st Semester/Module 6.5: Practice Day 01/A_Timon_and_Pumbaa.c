#include <stdio.h>
int main() {
    long int a, b, c;
    scanf("%ld %ld", &a, &b);

    c = a - b;

    if (c <= 0) {
        printf("0");
    }
    else {
        printf("%ld", c);
    }


    return 0;
}
