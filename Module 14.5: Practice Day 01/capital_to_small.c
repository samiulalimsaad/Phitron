#include <stdio.h>


void capital_to_small() {
    char c;
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') {
        printf("%c", c + 32);
    }
    else {
        printf("%c", c);
    }
}

int main() {
    capital_to_small();

    return 0;
}
