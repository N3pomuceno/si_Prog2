#include <stdio.h>
#include <stdint.h>

int abs(int x) {
    if (x < 0) {
        x = (-1)*x;
    }
    return x;
}


int main () {
    int32_t n;
    scanf("%d", &n);
    n = abs(n);
    printf("%d\n", n);
    return 0;
}