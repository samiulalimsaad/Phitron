#include<stdio.h>
#include<string.h>

int main() {
    char str;
    int cnt[26] = { 0 };

    while (scanf("%c", &str) != EOF) {
        int t = str - 'a';
        ++cnt[t];
    }

    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            char t = i + 'a';
            printf("%c : %d\n", t, cnt[i]);
        }
    }

    return 0;
}
