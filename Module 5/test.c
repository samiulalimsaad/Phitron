#include <stdio.h>
int main() {
    int a, b, c, max, min;

    // taking input
    scanf("%d %d %d", &a, &b, &c);

    // checking for max
    //is a greater than b and c
    if (a >= b && a >= c) {
        max = a;
    }
    //is b greater than a and c
    else if (b >= a && b >= c) {
        max = b;
    }
    //is c greater than a and b
    else if (c >= a && c >= b) {
        max = c;
    }

    // checking for min
    //is a less than b and c
    if (a <= b && a <= c) {
        min = a;
    }
    //is b less than a and c
    else if (b <= a && b <= c) {
        min = b;
    }
    //is c less than a and b
    else if (c <= a && c <= b) {
        min = c;
    }
    // printing the result
    printf("%d %d", min, max);
    return 0;
}