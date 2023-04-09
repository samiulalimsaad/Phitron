#include <stdio.h>
int main(int argc, char const* argv[]) {
    int i = 10;
    while (i >= 0) {
        printf("%d ", i);
        i -= 2;
    }
    return 0;
}
