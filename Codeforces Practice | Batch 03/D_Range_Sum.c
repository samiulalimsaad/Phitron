#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        long int a, b;
        scanf("%ld %ld", &a, &b);

        long int ma = a > b ? a : b;
        long int mi = a == ma ? b : a;


        long long sum1 = (ma * (ma + 1)) / 2;
        long long sum2 = (--mi * (mi + 1)) / 2;
        long long sum = sum1 - sum2;

        printf("%lld\n", sum);
    }




    return 0;
}
