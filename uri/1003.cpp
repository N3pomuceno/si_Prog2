#include<stdio.h>
#include<stdint.h>

int main () {
    int32_t A; 
    int32_t B; 
    int32_t soma; 
    scanf("%d", &A);
    scanf("%d", &B);
    soma = A + B;

    printf("SOMA = %d\n", soma);
    return 0;
}