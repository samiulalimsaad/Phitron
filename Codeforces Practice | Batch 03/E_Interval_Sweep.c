#include <stdio.h>

int main() {

    int a, b, even = 0, odd = 0;

    scanf("%d %d", &a, &b);


    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    if ((a != 0 && a == b) || even > 0 && odd > 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }



    return 0;
}
