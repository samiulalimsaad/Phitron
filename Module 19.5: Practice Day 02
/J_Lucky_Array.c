#include<stdio.h>
#include<limits.h>

int main() {

    int n;
    scanf("%d", &n);

    long int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%ld", &arr[i]);
    }

    long int min = arr[0], c = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            c = 0;
            min = arr[i];
        }
        if (arr[i] == min) {
            ++c;
        }
    }

    if (c % 2 == 0) {
        printf("Unlucky");
    }
    else {
        printf("Lucky");
    }

    return 0;
}
