// Passagem de parâmetros!

// Entendemos como passagem de valor como uma passagem por cópia do conteúdo de uma variável.


#include <stdio.h>

int incrementa (int p) {
    p++;
    return p;
}

int main () {
    int y =10;
    int x = incrementa (y); // x == 11 e y == 10
}

// O conteúdo passa para a função, mas não altera no endereço de memória, só retorna o valor copiado para x