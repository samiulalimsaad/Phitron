#include <stdio.h>

int main(int argc, char const* argv[]) {
    int n, x, c = 0;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            c++;
        }
    }

    printf("%d", c);


    return 0;
}
