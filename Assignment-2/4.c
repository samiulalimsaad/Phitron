#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, index, replacer;

    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &index, &replacer);


    for (int i = 0; i < a; i++) {
        if (i == index) {
            arr[i] = replacer;
        }
    }

    for (int i = a - 1; i >= 0; i--) {

        printf("%d ", arr[i]);
    }


    return 0;
}
