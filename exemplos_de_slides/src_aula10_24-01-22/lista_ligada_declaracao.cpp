#include<stdlib.h>

typedef struct no {
    int dado;
    struct no* prox;
} No;


int main () {
    No *l = NULL; // Dois agregados em que são ponteiros desse agregado, um começa com NULL, e outro só é declarado
    No *n;

    n = (No *) malloc(sizeof(No)); // n é alocado com a memória de um agregado e depois é adicionado o valor do dado para n e depois o prox recebe NULL
    n -> dado = 108;
    n -> prox = NULL;
    l = n;                         // por fim o ponteiro do agregado l recebe o ponteiro de n (?) - a lista começa no n, l de lista, e n de nó.
    free(n);
    return 0;
}


// para adicionar novos elementos na lista, basta substituir o null pelo próximo endereço e o prox desse novo, e último, elemento será null.
// É possível colocar tbm no início, basta colocar o endereço do primeiro ponto como o prox desse novo elemento e depois colocar o dado normalmente.


// Podemos percorrer pela lista ligada fazendo uma iteração de while prox diferente de null, e quando for null sairá, lembrando de colocar a variação do prox dentro do while:
/*  
No *p = l; 
while (p != NULL) 
    p = p-> prox


Caso tenhamos a vontade de inserir no início, podemos fazer da seguinte forma:
void InsereInicio (No **l, int n){
    // cria novo no 
    No *novo;
    novo = (No *)malloc(sizeof(No));
    novo->dado = n;
    novo-> prox = NULL;

    // fazer novo no apontar para o primeiro:
    novo -> prox = *l;

    //atualizar ponteiro principal;
    *l = novo;
}



Caso tenhamos a vontade de inserir no final, podemos fazer da seguinte forma:
void InsereFim (No **l, int n) {
    // cria novo no
    No *novo;
    novo = (No *) malloc(sizeof(No));
    novo-> dado = n;
    novo -> prox = NULL;

    //procura ultimo no (aponta para null)
    No *aux = *l;
    while(aux->prox != NULL) {aux = aux->prox;}

    //ultimo apontar para o novo no
    aux->prox = novo;
}

*/ 