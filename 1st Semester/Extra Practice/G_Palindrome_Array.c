#include<stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int flag = 0;

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("NO");
    }
    else {
        printf("YES");
    }


    return 0;
}
