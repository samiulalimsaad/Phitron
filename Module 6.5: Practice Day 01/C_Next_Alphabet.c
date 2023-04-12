#include <stdio.h>

int main(int argc, char const* argv[]) {
    char c;
    scanf("%c", &c);

    if (c == 'Z') {
        printf("%c", 'A');
    }
    else if (c == 'z') {
        printf("%c", 'a');
    }
    else {
        printf("%c", c + 1);
    }

    return 0;
}
