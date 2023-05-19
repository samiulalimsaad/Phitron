#include<stdio.h>
#include<limits.h>

int main() {
    int n, m;

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &n);

        long int arr[n];
        int min = INT_MAX;

        for (int i = 0; i < n; i++) {
            scanf("%ld", &arr[i]);
        }


        for (int i = 1; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                long int t = arr[i] + arr[j] + j - i;
                if (t < min) {
                    min = t;
                }
            }

        }
        printf("%d ", min);
    }

    return 0;
}
