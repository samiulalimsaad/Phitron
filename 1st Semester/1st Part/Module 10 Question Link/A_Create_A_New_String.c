#include<stdio.h>
#include<string.h>

int main() {
    char s[1000], t[1000];
    int sl = 0, tl = 0;
    scanf("%s %s", s, t);

    for (; s[sl] != '\0'; ++sl);
    for (; t[tl] != '\0'; ++tl);

    printf("%d %d\n%s %s\n", sl, tl, s, t);
    return 0;
}