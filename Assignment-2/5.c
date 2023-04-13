#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;

    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = a - 1; i >= 0; i--) {

        if (i % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }


    return 0;
}
