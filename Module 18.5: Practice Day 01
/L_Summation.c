#include<stdio.h>

void fun(long int arr[], int num, long long sum) {
    if (num < 0) {
        printf("%lld", sum);
        return;
    }

    sum += arr[num];
    fun(arr, num - 1, sum);

}

int main() {
    int n;
    scanf("%d", &n);

    long int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%ld", &arr[i]);
    }

    fun(arr, n - 1, 0);

    return 0;
}
