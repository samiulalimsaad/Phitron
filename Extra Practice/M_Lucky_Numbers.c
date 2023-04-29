#include <stdio.h>

int main() {

    long int a, b, min = 0;
    scanf("%ld %ld", &a, &b);

    for (int i = a; i <= b; i++) {
        int t = i, flag = 0;

        while (t > 0) {
            int r = t % 10;
            t = t / 10;

            if (r != 4 && r != 7) {
                flag = 1;
            }
        }

        if (!flag) {
            printf("%d ", i);
            min = 1;
        }
    }
    if (!min) {
        printf("-1");
    }
    return 0;
}
