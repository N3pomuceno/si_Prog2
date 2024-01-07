// Exemplo aula de ponteiro;
#include <stdio.h>
#include <stdint.h>


struct P {
    int32_t x;
    char y;
};

void imprimir (struct P* p3, struct P p4) {
    printf ("%d %d\n", p3->x, p4.x);            // para ponteiros o operador de acesso (.) é substituído por (->)
    p3->x = 10; p4.x = 10;                      // Aqui mudamos o valor de p3 no endereço da variável p0, enquanto em p4 só altera o valor em p4 e não na origem, pois ele copia, mas não altera junto.
}

int main () {
    struct P p0 = { .x = 20, .y = 'Y' }; // Tem que com aspas simples, se for aspas duplas esse reconhece de outra forma, que não é char, é const char*
    struct P p1 = { .x = 20, .y = 'Y' };
    imprimir (&p0, p1);                  // Pegamos a cópia do endereço do p0, e a cópia do conteúdo de p1;
    printf ("%d %d\n", p0.x, p1.x);

}