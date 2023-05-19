#include <stdio.h>
int main() {
    int inputs,
        max = 0;

    scanf("%d", &inputs);
    for (int i = 0; i < inputs; i++) {
        int number;
        scanf("%d ", &number);
        if (max < number) {
            max = number;
        }

    }
    printf("%d\n", max);
    return 0;
}