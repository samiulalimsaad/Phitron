#include <stdio.h>
#include <limits.h>


int main() {
    int num, min = INT_MAX, index = 0;
    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < num; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    }

    printf("%d %d", min, index + 1);

    return 0;
}
