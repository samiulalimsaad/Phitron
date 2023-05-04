#include <stdio.h>

void sort(long int arr[], int n) {
    long int temp, p[n];

    for (int i = 0; i < n; i++) {
        p[i] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (p[j] <= p[i]) {
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%ld\n", p[i]);
    }
}

int main() {
    long int a[3];
    scanf("%ld %ld %ld", &a[0], &a[1], &a[2]);
    sort(a, 3);

    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("%ld\n", a[i]);
    }


    return 0;
}
