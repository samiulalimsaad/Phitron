#include <stdio.h>
int main() {
    int inputs,
        even = 0,
        odd = 0,
        positive = 0,
        negative = 0;

    scanf("%d", &inputs);
    for (int i = 0; i < inputs; i++) {
        int number;
        scanf("%d ", &number);
        if (number % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
        if (number > 0) {
            positive++;
        }
        else if (number < 0) {
            negative++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);


    return 0;
}