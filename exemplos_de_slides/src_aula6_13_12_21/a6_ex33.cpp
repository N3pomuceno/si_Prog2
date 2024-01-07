// Alocação de memória parte 1


#include <stdio.h>
#include <stdlib.h> //Biblioteca para usar o malloc/new

struct P {
    int x;
    char y;
};

int main () {
    //Aloca (C) o agregado P
    struct P* vp = (struct P*)
    malloc (1*sizeof (struct P));  // Repete o parâmetro com o número de bytes que eu quero alocar. E é dado um espaço com o tamanho do parâmetro que eu acesso com esse ponteiro.
    // inicializa campos de P 

    vp -> x = 10;                  // Dou os valores para o ponteiro, que tenho que utilizar o operado de acesso ainda sim.
    vp -> y = 'Y';

    //imprime x (valor 10)
    printf ("%d", vp -> x);
    //descarte a memória
    free (vp);                     // Lembrar sempre de descartar pois não é como variável de escopo local que é descartada automaticamente, free é para C
    return 0;    
}