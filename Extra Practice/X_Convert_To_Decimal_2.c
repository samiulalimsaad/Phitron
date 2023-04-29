#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n > 0) {
        long long num, bin = 0, result = 0;
        scanf("%lld", &num);
        while (num > 0) {
            int rem = num % 2;
            num = num / 2;
            if (rem == 1) {
                bin = bin + 1;
            }
        }

        for (int i = 0; i < bin; i++) {
            result += pow(2, i);
        }
        printf("%lld\n", result);
        --n;
    }



    return 0;
}
