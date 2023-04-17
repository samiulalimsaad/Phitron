#include<stdio.h>
#include<string.h>

int main() {
    char a[11], b[11];
    scanf("%s", a);
    scanf("%s", b);
    int al = strlen(a), bl = strlen(b);
    printf("%d %d\n", al, bl);
    printf("%s%s\n", a, b);
    char t = b[0];
    b[0] = a[0];
    a[0] = t;
    printf("%s %s\n", a, b);

    return 0;
}
