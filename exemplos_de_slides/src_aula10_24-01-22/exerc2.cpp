// Considere uma lista ligada circular com nó cabeça. Dê sua declaração principal e faça um programa que imprima todos os seus elementos.
#include<stdio.h>

typedef struct no {
    int dado;
    struct no* prox;
} No;

int imprimeLista (No* l) {
    int n = l->dado;
    No *p = l;
    for (int i = 0; i < n; i++) {
        printf ("%d ", p->dado);
        p = p->prox;
    }
    return n;
}