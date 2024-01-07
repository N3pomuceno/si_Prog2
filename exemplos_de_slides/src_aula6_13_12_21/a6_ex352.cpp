// Entendemos como passagem por referência como uma passagem por cópia do endereço de uma variável.


#include <stdio.h>

int incrementa (int* p) {
    (*p)++;
    return *p;
}

int main () {
    int y =10;
    int x = incrementa (&y); // x == 11 e y == 11
}


// Aqui você passa o endereço de y, que faz a alteração no endereço e retorna e atribui o mesmo valor para x.