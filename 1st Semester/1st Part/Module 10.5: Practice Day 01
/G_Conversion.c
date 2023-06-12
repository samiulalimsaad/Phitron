#include<stdio.h>
#include<string.h>

int main() {
    char arr[100000];
    scanf("%s", arr);

    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] -= 32;
            continue;
        }
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] += 32;
            continue;
        }
        if (arr[i] >= ',') {
            arr[i] = ' ';
        }
    }
    printf("%s", arr);
    return 0;
}
