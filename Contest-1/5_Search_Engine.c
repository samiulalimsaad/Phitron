#include <stdio.h>

int main() {

    int t, n, match, temp;

    scanf("%d", &t);
    temp = t + 1;

    while (t > 0) {
        scanf("%d", &n);

        int a[n], index = -1;

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        scanf("%d", &match);

        for (int i = 0; i < n; i++) {
            if (a[i] == match) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            printf("Case %d: %d\n", temp - t, index + 1);
        }
        else {
            printf("Case %d: Not Found\n", temp - t);
        }

        --t;
    }


    return 0;
}
