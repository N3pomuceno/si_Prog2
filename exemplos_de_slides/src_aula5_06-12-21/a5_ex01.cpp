
#include <stdio.h>
#include <stdint.h> // para usar a expressão de int32_t: https://pubs.opengroup.org/onlinepubs/009604599/basedefs/stdint.h.html

typedef struct Data {
    int32_t dia;
    int32_t mes;
    int32_t ano;
} Data;


int main() {
    Data nascimento;
    printf("%d\n", nascimento.dia); // Um valor aleatório qualquer.
    scanf("%d %d %d", &nascimento.dia, &nascimento.mes, &nascimento.ano);
    printf("%d/%02d/%d\n", nascimento.dia, nascimento.mes, nascimento.ano);

    int tamanho = sizeof(nascimento);
    printf("tamanho: %d bytes\n", tamanho);
    return 0;
}