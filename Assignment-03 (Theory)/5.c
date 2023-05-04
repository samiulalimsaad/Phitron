
#include <stdio.h>
#include <string.h>

int is_palindrome(char str[], int size) {
    int i = 0, j = size - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return 0;
        }
        ++i;
        --j;
    }
    return 1;
}

int main() {

    char str[10];
    scanf("%s", str);

    int result = is_palindrome(str, strlen(str));

    if (result) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }



    return 0;
}
