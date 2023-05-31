#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, even = 0, odd = 0;

    scanf("%d %d", &a, &b);


    if ((a == 0 && a == b) || abs(a - b) >= 2) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }



    return 0;
}
