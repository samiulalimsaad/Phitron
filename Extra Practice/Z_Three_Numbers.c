#include <stdio.h>

int main() {

    int k, s, c = 0;
    scanf("%d %d", &k, &s);

    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int t = s - x - y;
            if (t >= 0 && t <= k) {
                c++;
            }
        }
    }
    printf("%d", c);
    return 0;
}
