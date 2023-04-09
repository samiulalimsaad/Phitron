#include<stdio.h>

int main(int argc, char const* argv[]) {
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= 12; i++) {
        printf("%d * %d = %d\n", num, i, i * num);
    }

    return 0;
}
