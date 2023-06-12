#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z') {
        printf("ALPHA\nIS CAPITAL");
    }
    else if (a >= 'a' && a <= 'z') {
        printf("ALPHA\nIS SMALL");
    }
    else if (a >= '0' && a <= '9') {
        printf("IS DIGIT");
    }


    return 0;
}
