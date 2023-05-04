#include <stdio.h>

void printNumbers(int n) {
    for (int i = 1; i < n; i++) {
        printf("%d ", i);
    }
    printf("%d", n);

}

int main() {
    int a;
    scanf("%d", &a);
    printNumbers(a);
    return 0;
}
