
#include <stdio.h>


// Has Return + Parameter
int multiplication(int a, int b) {
    return a * b;
}

// Has Return + No Parameter
int get_int_input() {
    int a;
    scanf("%d", &a);
    return a;
}

// No Return + Parameter
void print_sum(int a, int b) {
    printf("%d\n", a + b);
}

// No Return + No Parameter
void print_hello() {
    printf("Hello\n");
}


int main() {

    // Has Return + Parameter
    printf("%d\n", multiplication(2, 3));

    // Has Return + No Parameter
    printf("%d\n", get_int_input());

    // No Return + Parameter
    print_sum(2, 3);

    // No Return + No Parameter
    print_hello();

    return 0;
}
