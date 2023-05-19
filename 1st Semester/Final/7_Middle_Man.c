#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // sort the array
    for (int i = 0; i < n - 1; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    int middle = (n + 1) / 2;

    if (n % 2 == 0) {
        printf("%d %d", arr[middle - 1], arr[middle]);
    }
    else {
        printf("%d", arr[middle - 1]);
    }

    return 0;
}
