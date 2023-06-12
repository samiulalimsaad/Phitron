#include<stdio.h>

void fun(int num) {
    if (num == 0) {
        return;
    }
    fun(num - 1);
    printf("I love Recursion\n");
}

int main() {
    int n;
    scanf("%d", &n);
    fun(n);

    return 0;
}
