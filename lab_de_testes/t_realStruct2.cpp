//exercicio 7c, lista 2
#include <stdio.h>

typedef struct real
{
    int parteInteira;
    int parteFracionaria;
} Real;


int main () {
    Real a = {.parteInteira = 5, .parteFracionaria = 5}; 

    char resultado[] = "0,0";
    resultado[0] = 48+a.parteInteira;
    resultado[2] = 48+a.parteFracionaria;

    printf("%s", resultado);
    return 0;
}