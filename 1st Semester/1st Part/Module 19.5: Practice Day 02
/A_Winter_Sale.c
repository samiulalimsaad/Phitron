#include<stdio.h>

int main() {

    int dis, price;

    scanf("%d %d", &dis, &price);


    float t = price * 1.0 / (100 - dis);

    printf("%.2f", t * 100.0);

    return 0;
}
