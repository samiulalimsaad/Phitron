#include<stdio.h>
#include<string.h>

int main() {
    char arr[10000];
    scanf("%s", arr);
    int isPalindrome = 0;

    for (int i = 0, j = strlen(arr) - 1; i <= j; ++i, --j) {
        if (arr[i] != arr[j]) {
            isPalindrome = 0;
            break;
        }
        isPalindrome = 1;
    }

    if (isPalindrome > 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
