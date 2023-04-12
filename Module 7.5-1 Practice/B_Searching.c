#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int arr[num], find, index = -1;

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &find);

    for (int i = 0; i < num; i++) {
        if (arr[i] == find) {
            index = i;
            break;
        }
    }
    printf("%d", index);
    return 0;
}
