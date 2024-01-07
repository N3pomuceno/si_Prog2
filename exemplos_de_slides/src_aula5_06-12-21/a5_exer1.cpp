
#include <stdio.h>
#include <stdint.h>


typedef struct Data {
    int32_t dia; // tamanho fixo de 4 bytes 
    int32_t mes; // tamanho fixo de 4 bytes
    int32_t ano; // tamanho fixo de 4 bytes
} Data;


typedef struct Pessoa {
    // char nome[N]   // tamanho de N bytes
    char* nome;       // tamanho fixo de 8 bytes, só é possível escrever 7 caractéres por causa do \0
    Data nascimento;  // tamanho fixo de 12 bytes
    float altura;     // tamanho fixo de 4 bytes  
    float peso;       // tamanho fixo de 4 bytes
    char local[30];   // tamanho fixo de 30 bytes 

} Pessoa;

int main() {
    Pessoa Joao; // tamanho total com char* nome: 32 bytes

    printf("Nome: ");
    scanf("%s", &Joao.nome);

    printf("Nascimento: ");
    scanf("%d %d %d", &Joao.nascimento.dia, &Joao.nascimento.mes, &Joao.nascimento.ano);

    printf("Altura: ");
    scanf("%f", &Joao.altura);

    printf("Peso: ");
    scanf("%f", &Joao.peso);

    printf("Local: ");
    scanf("%s", &Joao.local);

    printf("%d/%02d/%d - %s\n", Joao.nascimento.dia, Joao.nascimento.mes, Joao.nascimento.ano, Joao.local);

    int tamanho = sizeof(Joao);
    printf("tamanho: %d bytes\n", tamanho);
    return 0;
}