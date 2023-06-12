#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < num; i++) {
        if (arr[i] < 0) {
            arr[i] = 2;
        }
        else if (arr[i] > 0) {
            arr[i] = 1;
        }

    }
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
