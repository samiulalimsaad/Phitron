#include <stdio.h>
#include <string.h>


int main() {
    char str[10001];
    int v = 0;

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            v++;
        }
    }
    printf("%d", v);

    return 0;
}
