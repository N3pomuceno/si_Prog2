#include<stdio.h>
#include<stdint.h>

int main () {
    int32_t A;
    int32_t B;
    int32_t C;
    int32_t D;
    scanf ("%d %d %d %d", &A, &B, &C, &D);
    int32_t dif = (A*B - C*D);
    printf ("DIFERENCA = %d\n", dif);
    return 0;
}