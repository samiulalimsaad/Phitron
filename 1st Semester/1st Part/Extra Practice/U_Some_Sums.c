#include <stdio.h>

int main() {

    int n, a, b;
    long long sum = 0, sum2 = 0;
    scanf("%d %d %d", &n, &a, &b);

    for (int i = 1; i <= n; i++) {
        int t = i;
        while (t > 0) {
            sum2 += t % 10;
            t /= 10;
        }
        if (sum2 >= a && sum2 <= b) {
            sum += i;
        }
        sum2 = 0;
    }

    printf("%lld\n", sum);


    return 0;
}
