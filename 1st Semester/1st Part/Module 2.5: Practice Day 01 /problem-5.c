#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;

    scanf("%d", &a);

    if (a > 1000) {
        a = a - 1000;
        printf("I will buy Punjabi\n");
        if (a >= 500) {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }

    }
    else {
        printf("Bad luck!\n");
    }



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
