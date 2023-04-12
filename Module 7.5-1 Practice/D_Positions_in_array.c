#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < num; i++) {
        if (arr[i] <= 10) {
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}
