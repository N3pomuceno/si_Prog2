#include<stdlib.h>

typedef struct no {
    int dado;
    struct no* prox;
    struct no* ant;
} No;


//Para criar uma lista:
No *crialista() {
    No *l = NULL;
    return l;
}

// Verificar se a lista é vazia:
int listaVazia(No *l) {
    if (l == NULL) return 1;
    else return 0;
}

//Percorrer a lista
void percorreLista (No *l) {
    No *p = l;
    while (p != NULL) {
        p = p->prox;
    }
    while (p != NULL) {
        p = p->ant;
    }
}