#include <stdio.h>

int main() {

    char str[10001];
    int cap = 0, small = 0, space = 0;

    fgets(str, 10001, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            cap++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            small++;
        }
        else if (str[i] == ' ') {
            space++;
        }
    }

    printf("Capital - %d\n", cap);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);


    return 0;
}
