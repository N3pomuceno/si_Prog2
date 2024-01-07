// Alocação de memória parte 1


#include <stdio.h>
#include <stdlib.h>  //Biblioteca para usar o malloc/new


struct P {
    int x;
    char y;
};

int main () {
    //Aloca (C++) o agregado P
    auto* vp = new P{.x = 10, .y = 'Y'};        // Repete o parâmetro com o número de bytes que eu quero alocar. E é dado um espaço com o tamanho do parâmetro que eu acesso com esse ponteiro.
    // inicializa campos de P já dentro do new diretamente 


    //imprime x (valor 10)
    printf ("%d", vp -> x);

    //descarte a memória
    delete (vp);                     // Lembrar sempre de descartar pois não é como variável de escopo local que é descartada automaticamente, delete é para C++
    return 0;    
}