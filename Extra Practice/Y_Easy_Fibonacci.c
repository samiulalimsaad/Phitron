#include <stdio.h>
#include <math.h>

int main() {
    int n, s = 0;
    scanf("%d", &n);

    int arr[n];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }



    return 0;
}
