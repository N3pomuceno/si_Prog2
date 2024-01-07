#include <stdio.h>
#include <stdint.h>


void impressao(int result) { // praticando a utilização de função void.
    printf("O resultado da soma eh %d\n", result);
    return;
}


void soma(int32_t n1, int32_t n2, int32_t n3) {
    int32_t resultado = n1 + n2 + n3;
    impressao(resultado); // Um parâmetro pode ser chamado como uma soma de variáveis. Como :"impressao(n1 + n2 + n3);"
    return;
}


int main () {
    int32_t x1;
    int32_t x2;
    int32_t x3;
    scanf("%d %d %d", &x1, &x2, &x3);
    soma(x1, x2, x3);
    return 0;
}
