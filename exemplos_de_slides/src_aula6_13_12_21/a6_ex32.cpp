//warning: C++ designated initializers only available with '-std=c++20' or '-std=gnu++20' [-Wpedantic]
// 10 |     struct P p0 = {.x = 0, .y = 'Y'};   // O agregado P que recebe um inteiro e um caracter.
//
// criei o executável com: gcc -O3 -pedantic -fsanitize=address -std=c++20 .\a6_ex22.cpp -o .\a6_ex22.exe 

#include <stdio.h>

struct P {
    int x;
    char y;
};

int main () {
    struct P p0 = {.x = 20, .y = 'Y'};   // O agregado P que recebe um inteiro e um caracter.
    struct P* pp1 = &p0;                // O ponteiro do agregado que guarda o endereço do p0, ele "aponta para o p0"
    struct P** ppp2 = &pp1;             // O ponteiro do ponteiro que guarda o endereço do ponteiro que guarda o endereço do p0, ele aponta para aquele que ponta para p0

    printf (" %p %p %p %p \n", &p0, pp1, &pp1, ppp2); // endereço de p0, conteúdo de pp1 (que é o ondereço de p0), endereço de pp1, conteúdo de ppp2 (que é o ondereço de pp1)

    printf (" %d %d %d %d %d\n", p0.x, (*pp1).x, pp1->x, (*ppp2)->x, (*(*ppp2)).x); // 5 Casos listados abaixo.
    // primeiro: Conteúdo da variável inteira de p0
    // segundo : O operador de acesso, esse asterístico (* pp1) fala para ir na posição de seu conteúdo, que no caso é p0, e pegar o valor de x, o valor inteiro.
    // terceiro: O que tbm serve como operador de acesso, essa setinha, (->), fala para ir na posição de seu conteúdo, que é p0, e o x serve para definir de pegar o valor x.
    // quarto  : Usando os dois operadores de acesso simultaneamente partindo de ppp2 significa, fala para ir na posição de seu conteúdo, que é pp1, e dele pegar a posição de seu conteúdo, que vai levar para p0, e depois disso pega o valor em x.
    // quinto  : Da mesma forma podemos utilizar dois operadores asterísticos, da mesma forma que no quarto: partindo de ppp2, falo para ir na posição de seu conteúdo, pp1, que tbm falo para ir na posição de seu conteúdo, p0, que quero seu valor inteiro x.
}