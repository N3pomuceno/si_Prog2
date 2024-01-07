#include<stdio.h>
#include<stdlib.h>


typedef struct reg {
    int n;
    char c;
    struct reg *p; // Essa situação tem que ter o ponto ali pois se não seria dizer que dentro de uma caixa tem outra caixa e que tem outra e assim vai infinitamente. 
    //Essa situação é de um agregado que dentro dele tem um endereço de agregado.
} Reg;

int main () {
    Reg r1;
    Reg *r2;
    r2 = (Reg *)malloc(sizeof(Reg));
    r2 -> n = 0;
    r2 -> c = 'a';
    r2 -> p = NULL; // Aqui fala que o endereço que a alocação de memória r2 guarda é vazia.
    r1.n = 1;
    r1.c = 'b';
    r1.p = r2;      // Já aqui mostra que o endereço guardado é o da alocação r2.
    free(r2);       
    return 0;
}


// Uma brincadeira extra daqui, seria utilizar a linha 'r1.p ->n = 5;' que é pegar o conteúdo do endereço de p no agregado r1, que é r2, e ir no n e alterar o valor para 5.
// Que é o mesmo que (*r1.p).n =5