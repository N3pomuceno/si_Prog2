// Em C++, após 2011, podemos ter passagem por movimento, move semantics, para um valor rvalue, constante prvalue ou variável x value prestes a expirar.

#include <stdio.h>
#include <utility> // Para utilizar o std::move

int incrementa (int&& p) {
    p++;
    return p;
}

int main () {
    int x1 = incrementa(10);           // x1 == 11. aceita prvalue
    int y =10;
    int x = incrementa (std::move(y)); // x == 11 e y expira aqui
}
