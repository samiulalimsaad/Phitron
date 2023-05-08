#include<stdio.h>

void fun(long int arr[], int num) {
    if (num < 0) {
        return;
    }
    if (num % 2 == 0) {
        printf("%ld ", arr[num]);
    }
    fun(arr, num - 1);

}

int main() {
    int n;
    scanf("%d", &n);

    long int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%ld", &arr[i]);
    }

    fun(arr, n - 1);

    return 0;
}
