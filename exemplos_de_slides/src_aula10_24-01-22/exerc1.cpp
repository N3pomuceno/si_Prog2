//Faça um programa que checa se uma lista está vazia e outro que conte o número de elementos de uma lista.
#include<stdlib.h>

typedef struct no {
    int dado;
    struct no* prox;
} No;



int listaVazia(No *l) {
    if (l == NULL) return 1;
    else return 0;
}

int tamanhoLista(No *l) {
    int n = 0;
    No *aux = l;
    while (aux != NULL) {
        n++; 
        aux = aux->prox;
    }
    return n;
}


/*
Criação de lista vazia

No* crialista() {
    No *l = NULL;
    return l;
}

*/