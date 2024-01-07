#include <stdio.h>
#include <stdint.h>


int main () {
    int32_t A;
    int32_t B;

    scanf("%d", &A);
    scanf("%d", &B);
    int32_t result = A+B;
    printf ("X = %d\n", result);
    return 0;
}