#include <stdio.h>


char capital_to_small(char ch) {

    if (ch >= 'A' && ch <= 'Z') {
        return  ch + 32;
    }
    return  ch;
}

int main() {
    char c;
    scanf("%c", &c);
    char ch = capital_to_small(c);
    printf("%c", ch);

    return 0;
}
