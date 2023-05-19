#include <stdio.h>

int* change_it(int arr[], int n) {
    arr[n - 1] = 100;
    return arr;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int* p = change_it(arr, n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", p[i]);
    }

    return 0;
}
