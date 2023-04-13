#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a = 0;
    scanf("%d", &a);

    if (a <= 0) {
        for (int i = a; i <= 1; i++) {
            printf("%d ", i);
        }
    }
    else {
        for (int i = 1; i <= a; i++) {
            printf("%d ", i);
        }
    }

    return 0;
}
