#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n > 0) {
        int a, b;
        long int sum = 0;
        scanf("%d %d", &a, &b);

        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        for (int i = a + 1; i < b; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        printf("%ld\n", sum);
        --n;
    }
    return 0;
}
