#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, e = 0, o = 0;

    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < a; i++) {
        if (arr[i] % 2 == 0) {
            e += arr[i];
        }
        else {
            o += arr[i];
        }
    }

    printf("%d %d", e, o);

    return 0;
}
