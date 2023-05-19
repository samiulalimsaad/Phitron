#include <stdio.h>

int main() {
    while (1) {
        int min, max;
        long int sum = 0;
        scanf("%d %d", &max, &min);

        if (max <= 0 || min <= 0) {
            break;
        }

        if (max < min) {
            int temp = max;
            max = min;
            min = temp;
        }

        for (int i = min; i <= max; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%ld\n", sum);
    }
    return 0;
}
