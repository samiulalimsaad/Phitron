#include<stdio.h>

int main() {

    int n, k;
    scanf("%d %d", &n, &k);

    long long arr[n], b[n];
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] >= arr[j]) {
                long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)break;
        sum += arr[i];
    }

    printf("%lld\n", sum);


    return 0;
}
