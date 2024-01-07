#include <stdio.h>
#include <stdint.h>

int isNegative(int a) {
    if (a < 0) {
        return 1;
    }
    return 0;
}

void printAbs (int a) {
    if (isNegative(a) == 1) {
        a = (-1)*a;
    }
    printf("%d", a);
    return;
}

int main() {
    int i;
    scanf("%d", &i);
    printAbs(i);
    return 0;
}