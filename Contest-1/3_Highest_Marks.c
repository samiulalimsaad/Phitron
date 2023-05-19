#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    int max = 0, a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max) max = a[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", max - a[i]);
    }


    return 0;
}
