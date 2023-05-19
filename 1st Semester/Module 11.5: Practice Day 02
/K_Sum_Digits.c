#include<stdio.h>

int main() {

    long int a, sum = 0;

    scanf("%ld", &a);

    char ch[a];
    scanf("%s", ch);

    for (int i = 0; i < a; i++) {
        sum += ch[i] - '0';
    }


    printf("%ld\n", sum);



    return 0;
}
