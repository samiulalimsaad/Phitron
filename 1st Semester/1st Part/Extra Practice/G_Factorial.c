#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        long long f = 1;

        scanf("%d", &n);

        for (int j = 1; j <= n; j++) {
            f *= j;
        }
        printf("%lld\n", f);
    }


    return 0;
}
