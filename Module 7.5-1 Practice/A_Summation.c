#include <stdio.h>
#include <stdlib.h> 


int main() {
    int num;
    scanf("%d", &num);

    long long arr[num], sum = 0;

    for (int i = 0; i < num; i++) {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }
    printf("%lld\n", llabs(sum));


    return 0;
}
