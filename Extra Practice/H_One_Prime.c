#include <stdio.h>

int main() {
    long int n, flag = 0;
    scanf("%ld", &n);

    if (n == 1) {
        printf("NO\n");
        return 0;
    }


    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            flag++;
        }
    }

    if (flag == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }




    return 0;
}
