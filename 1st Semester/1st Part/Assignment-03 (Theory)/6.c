
/*

Answer:
Pass by value : Pass by value means the value of the variable is passed to the function.

In pass by value, the function cannot change the value of the variable.

Pass by reference : Pass by reference means the address of the variable is passed to the function.

In pass by reference, the function can change the value of the variable.
*/

#include <stdio.h>

// Example of pass by value:
void increment(int a) {
    a++;
}

// Example of pass by reference:
void incrementPTR(int* a) {
    (*a)++;
}

int main() {
    int a = 5;

    // Example of pass by value:
    increment(a);
    printf("%d\n", a);

    // Example of pass by reference:
    incrementPTR(&a);
    printf("%d\n", a);
    return 0;
}



