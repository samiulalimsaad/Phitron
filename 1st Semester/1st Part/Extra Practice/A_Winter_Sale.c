#include<stdio.h>

int main() {

    int x, p;
    scanf("%d %d", &x, &p);

    float r = (100 - x);

    printf("%0.2f", (p * 100) / r);

    return 0;
}
