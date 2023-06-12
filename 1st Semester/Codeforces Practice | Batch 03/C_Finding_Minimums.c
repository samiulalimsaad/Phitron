#include <stdio.h>

int main() {
    long int a, b;
    scanf("%ld %ld", &a, &b);

    long long  arr[a];

    for (long int i = 0; i < a; i++) {
        scanf("%lld", &arr[i]);
    }

    for (long int i = 0; i < a; i += b) {
        long long   min = arr[i];
        for (long int j = i; j < i + b; j++) {
            if (arr[j] < min) {
                min = arr[j];
            }
        }
        printf("%lld ", min);
    }



    return 0;
}
