// Exclusivamente em C++ podemos criar uma referência lvalue, chamada de alias, para uma variável existente.
// Com esse recurso tbm é possível efetuar uma passagem por referência.

#include <stdio.h>

int incrementa (int& p) {
    p++;
    return p;
}

int main () {
    int y =10;
    int x = incrementa (y); // x == 11 e y == 11
}


// Nessa situação vc faz com que o endereço da variável p na função tenha o mesmo endereço do parâmetro colocado quando a função foi chamada, ou seja, y.
// Então tudo que acontecer com p, acontecerá com y da mesma forma, sendo assim uma passagem por referência, pois não é só uma cópia de conteúdo, tbm de endereço. p é um apelido de y.
