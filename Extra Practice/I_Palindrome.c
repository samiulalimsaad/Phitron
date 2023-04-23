#include <stdio.h>
#include <math.h>

int main() {
    long int n, o, t = 0;
    scanf("%ld", &n);
    o = n;


    for (double i = 0; n > 0; i++) {
        int r = (n % 10);
        t = (t * 10) + r;
        n /= 10;
    }

    if (t == o) {
        printf("%ld\n", t);
        printf("YES\n");
    }
    else {
        printf("%ld\n", t);
        printf("NO\n");
    }




    return 0;
}
