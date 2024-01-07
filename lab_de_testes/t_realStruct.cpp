//exercicio 7e lista 2
#include <stdio.h>

typedef struct real
{
    int parteInteira;
    int parteFracionaria;
} Real;


int main () {
    float f = 5.5;
    Real c;
    c.parteInteira = 10*f/10;
    c.parteFracionaria = (10.0*f - 10.0*c.parteInteira);

    printf("%d, %d", c.parteInteira, c.parteFracionaria);
    return 0;
}