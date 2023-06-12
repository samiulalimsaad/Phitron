#include<stdio.h>
#include<string.h>

int main() {

    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char str[100001];
        scanf("%s", str);

        int flag = 0;

        for (int j = 0; j < strlen(str) - 3; j++) {
            if (
                (str[j] == '0' && str[j + 1] == '1' && str[j + 2] == '0') ||
                (str[j] == '1' && str[j + 1] == '0' && str[j + 2] == '1')
                ) {
                flag = 1;
                break;
            }
        }

        if (flag == 1) {
            printf("Good\n");
        }
        else {
            printf("Bad\n");
        }
    }


    return 0;
}
