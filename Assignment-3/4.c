#include <stdio.h>
#include <string.h>


int main() {
    char str[10001];
    int s = 0, c = 0;

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            s++;
        }
        if (str[i] >= 'A' && str[i] <= 'Z') {
            c++;
        }
    }
    printf("%d %d", c, s);

    return 0;
}
