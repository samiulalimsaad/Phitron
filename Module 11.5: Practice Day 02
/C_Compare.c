#include<stdio.h>
#include<string.h>

int main() {
    char x[21], y[21];

    scanf("%s", x);
    scanf("%s", y);

    int v = strcmp(x, y);

    if (v < 0) {
        printf("%s", x);
    }
    else if (v > 0) {
        printf("%s", y);
    }
    else {
        printf("%s", y);
    }

    return 0;
}
