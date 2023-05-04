#include <stdio.h>

int str_len(char* s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char s[100];
    scanf("%s", s);
    printf("%d\n", str_len(s));

    return 0;
}
