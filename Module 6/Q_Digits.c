#include <stdio.h>
int main() {
    int inputs;

    scanf("%d", &inputs);


    for (int i = 0; i < inputs; i++) {
        int number;
        scanf("%d ", &number);
        if (number == 0) {
            printf("0 ");
        }

        while (number != 0) {
            int d = number % 10;
            number = number / 10;
            printf("%d ", d);
        }
        printf("\n");
    }
    return 0;
}