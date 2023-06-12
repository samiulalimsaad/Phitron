#include<stdio.h>
#include<limits.h>

int main() {
    int n, min = INT_MAX, minIndex = 0, max = INT_MIN, maxIndex;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] <= min) {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] >= max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    arr[minIndex] = max;
    arr[maxIndex] = min;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}
