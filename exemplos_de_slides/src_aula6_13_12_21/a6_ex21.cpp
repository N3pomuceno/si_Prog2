

#include <stdio.h>
#include <stdint.h>

void printAbs(int a) {
    if (a > 0) {
        printf ("%d ", a);
    }else {
        printf ("%d ", (-1)*a);
    }
    
}

int main () {
    int32_t n;
    scanf ("%d", &n);
    printAbs(n);
    return 0;
}