#include<stdio.h>
#include<string.h>

int main() {
    char s[1000001];
    int c = 0;
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        c += s[i] - '0';
    }
    printf("%d", c);
    return 0;
}